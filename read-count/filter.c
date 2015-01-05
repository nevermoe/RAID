#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>

#include <linux/sched.h>
#include <linux/kernel.h>    /* printk() */
#include <linux/slab.h>      /* kmalloc() */
#include <linux/fs.h>        /* everything... */
#include <linux/errno.h>	 /* error codes */
#include <linux/timer.h>
#include <linux/types.h>     /* size_t */
#include <linux/fcntl.h>     /* O_ACCMODE */
#include <linux/hdreg.h>     /* HDIO_GETGEO */
#include <linux/kdev_t.h>
#include <linux/vmalloc.h>
#include <linux/genhd.h>
#include <linux/blkdev.h>
#include <linux/buffer_head.h>    /* invalidate_bdev */
#include <linux/bio.h>
#include <linux/blkdev.h>
#include <linux/kobject.h>

MODULE_LICENSE("Dual BSD/GPL");

static int filter_major = 0;
module_param(filter_major, int, 0);
static int hardsect_size = 512;
module_param(hardsect_size, int, 0);

/*
 * Minor number and partition management.
 */
#define FILTER_MINORS	16
#define PRINT_DELAY		100 

/*
 * The internal representation of our device.
 */
struct filter_device {
	struct block_device* pdev;		/* pointer to the lower device */
	struct request_queue *queue;    /* The device request queue */
	struct gendisk *gd;
	struct file *filp;
	sector_t read_cnt;	

};
static struct filter_device * Device = NULL;


static int filter_open(struct block_device *bdev, fmode_t mode)
{
#if 0
	struct filter_device *dev = inode->i_bdev->bd_disk->private_data;
#endif
	return 0;
}

static int filter_release(struct gendisk *disk, fmode_t mode)
{
	struct filter_device *dev = disk->private_data;
	unsigned long flag;

	/*
	 * reset the write request and finished request
	 */

	return 0;
}

/*
 * The device operations structure.
 */
static struct block_device_operations filter_ops = {
	.owner        = THIS_MODULE,
	.open         = filter_open,
	.release      = filter_release,
};

/* 
 * The context structure is used for 
 * saving and recovering context from the upper device.
 * */
struct context {
	void *co_private;
	bio_end_io_t *co_end_io;
	sector_t co_sector;			/*record which sector to write*/
};

/*
 * The direct make request version.
 */
static int filter_make_request(struct request_queue *q, struct bio *bio)
{
	struct filter_device *dev = (struct filter_device *)q->queuedata;
#if 0
	printk("filter: make_request called\n"); 
#endif
	
	/* 
	 * save the context passed from the upper device 
	 */
	if (!bio_data_dir(bio)) {
		dev->read_cnt +=(bio->bi_size >> 9);	
	}
	
	bio->bi_bdev = dev->pdev;		/*forward the request to the lower device*/ 

	return 1;						 /*Pass bio to the lower device with a non-zero return value; */

}

/*
 * Set up our internal device
 */
static int setup_device(struct filter_device *dev, int which)
{
	sector_t nsectors = 0;

	//filp = filp_open("/dev/mapper/vg-lv2", O_RDWR, 0);	/*Open the lower device--local hard disk sdc.*/
	dev->filp = filp_open("/dev/sdc", O_RDWR, 0);		/*Open the lower device--local hard disk sdc.*/
	if (!dev->filp) {
		printk("filter: /dev/sdc file open failed.\n");
		return -EBUSY;
	}
	
	dev->pdev = dev->filp->f_path.dentry->d_inode->i_bdev;	/* assign dev->pdev with the lower device */

	dev->queue = blk_alloc_queue(GFP_KERNEL);		/*initialize the I/O queue;*/
	if (!dev->queue) {
		printk("filter: alloc queue failed.\n");
		return -ENOMEM;
	}
	blk_queue_make_request(dev->queue, filter_make_request);
	blk_queue_logical_block_size(dev->queue, hardsect_size); 
	dev->queue->queuedata = dev;					/* can be set to any value */

	/*
	 * The following steps initialize the gendisk structure.
	 */
	dev->gd = alloc_disk(FILTER_MINORS);			/*alloc disk */
	if ( !dev->gd ){
		printk("filter: alloc_disk failed.\n");
		return -ENOMEM;
	}
	dev->gd->major = filter_major;
	dev->gd->first_minor = which*FILTER_MINORS;
	dev->gd->fops = &filter_ops;
	dev->gd->queue = dev->queue;
	dev->gd->private_data = dev;
	snprintf(dev->gd->disk_name, 32, "%s", "rc");
	dev->read_cnt = 0;
	/* 	make the capacity of our filter_device 
	 *  	consistent with the lower device */
 	nsectors = get_capacity(dev->pdev->bd_disk);
	set_capacity(dev->gd, nsectors);


	add_disk(dev->gd);					/*add_disk, done */

	return 0;
}

static int __init filter_init(void)
{
	/*
	 * Get registered.
	 */
	filter_major = register_blkdev(filter_major, "filter"); 
	if (filter_major <= 0) {
		printk("filter: unable to get major number.\n");
		return -EBUSY;
	}

	/*
	 * Allocate the device, and set fields to zero. 
	 */
	Device = kmalloc(sizeof (struct filter_device), GFP_KERNEL);
	if (!Device) {
		printk("filter: kmalloc for Device failed.\n");
		goto out_unregister;
	}
	memset(Device, 0, sizeof(struct filter_device) );

	setup_device(Device , 0);

	return 0;

out_unregister:
	unregister_blkdev(filter_major, "filter");
	return -ENOMEM;
}

static void filter_exit(void)
{
	struct filter_device *dev = Device;

	printk("prepare to call filp_close\n");
	//filp_close(dev->filp, 0);
	set_device_ro(dev->pdev, 0);
	bd_release(dev->pdev);
	blkdev_put(dev->pdev, FMODE_READ|FMODE_WRITE);
	if (dev->gd) {
		del_gendisk(dev->gd);
		put_disk(dev->gd);
	}
	if (dev->queue)
		//blk_put_queue(dev->queue);		 /*only for NOQUEUE mode */
		blk_cleanup_queue(dev->queue);		 /*only for NOQUEUE mode */
		//kobject_put(&dev->queue->kobj);
	

	unregister_blkdev(filter_major, "filter");
	printk("received read request in sectors :[%llu]\n",dev->read_cnt);
	kfree(Device);
}

module_init(filter_init);
module_exit(filter_exit);
