#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5b3035d2, "module_layout" },
	{ 0xd70cb207, "blk_queue_merge_bvec" },
	{ 0xdbc2a508, "kobject_put" },
	{ 0x77a108df, "_write_unlock_irqrestore" },
	{ 0xa204f481, "alloc_pages_current" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0xe90dcae0, "__request_module" },
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0x9b1679b3, "part_round_stats" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51fa660f, "alloc_disk" },
	{ 0x5ed32ac9, "blk_cleanup_queue" },
	{ 0xe23d7acb, "up_read" },
	{ 0x3a3dd028, "bio_alloc_bioset" },
	{ 0xdf58b6d9, "blk_queue_prep_rq" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xbd638754, "blk_integrity_is_initialized" },
	{ 0x349cba85, "strchr" },
	{ 0x4b75100d, "bd_claim_by_disk" },
	{ 0x25ec1b28, "strlen" },
	{ 0x41cbd6ce, "blk_set_default_limits" },
	{ 0x8e1cfdb3, "blk_plug_device" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xdee83d0, "bdev_stack_limits" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x73c15c02, "blk_limits_io_opt" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x71356fba, "remove_wait_queue" },
	{ 0xaab06af8, "_write_lock_irqsave" },
	{ 0xcb88680, "__tracepoint_block_rq_remap" },
	{ 0x848ced9e, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x37ad4176, "__tracepoint_block_bio_complete" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0xda8340b3, "blk_run_queue" },
	{ 0x999e8297, "vfree" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x86b63db8, "blk_queue_flush" },
	{ 0xd9e629cb, "blk_start_queue" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xa58eca9c, "blk_limits_io_min" },
	{ 0x20b17d5f, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x768bd5af, "lookup_bdev" },
	{ 0xb4b0ee4e, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x23572e56, "generic_unplug_device" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0x62664e30, "blk_insert_cloned_request" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x68eebdea, "misc_register" },
	{ 0xa2749954, "__blkdev_driver_ioctl" },
	{ 0xde0bdcff, "memset" },
	{ 0xda328795, "bio_free" },
	{ 0x3d5eb3a6, "bio_init" },
	{ 0xc0102263, "blk_alloc_queue" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xe5950cdd, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xe5f952d9, "blk_lld_busy" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0x23faf3f, "del_gendisk" },
	{ 0xeb4c1fc8, "__tracepoint_block_remap" },
	{ 0x143ba3ee, "bio_add_page" },
	{ 0xb281519, "kobject_init_and_add" },
	{ 0x68f2f199, "blk_stack_limits" },
	{ 0x24196bf1, "blk_peek_request" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x85f8a266, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x672144bd, "strlcpy" },
	{ 0x7329e40d, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0x42fb359b, "bio_get_nr_vecs" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x6b5243d0, "elv_register_queue" },
	{ 0xf6ace89c, "blk_integrity_compare" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x6dcd0b7f, "thaw_bdev" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0x3fdac8a6, "blk_update_request" },
	{ 0x78a484c9, "_read_unlock_irqrestore" },
	{ 0xd851af78, "up_write" },
	{ 0x45d55543, "down_write" },
	{ 0xca26e9a5, "blk_unplug" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0x620c74ce, "bio_endio" },
	{ 0x7a848702, "_read_lock_irqsave" },
	{ 0xd66ed759, "bio_put" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x9152f078, "kobject_uevent_env" },
	{ 0x2e97a729, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x20f9322a, "idr_pre_get" },
	{ 0x9243adc3, "bio_sector_offset" },
	{ 0xd7a612d, "module_put" },
	{ 0xf7df2ad8, "blk_queue_bounce_limit" },
	{ 0x2a9503c2, "submit_bio" },
	{ 0x7dceceac, "capable" },
	{ 0x38b4cb02, "open_by_devnum" },
	{ 0x63e9862, "elv_queue_empty" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xee065ced, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x41db5ac3, "__free_pages" },
	{ 0xc5736a48, "blkdev_put" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x86211c86, "bio_integrity_clone" },
	{ 0x8085dc25, "__bio_clone" },
	{ 0xeb8ad5b7, "bdevname" },
	{ 0x2adeea2d, "blk_queue_make_request" },
	{ 0x2d1fc2a4, "__blk_put_request" },
	{ 0xd92e2292, "blk_queue_softirq_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x1000e51, "schedule" },
	{ 0x84aca595, "bio_integrity_trim" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xd13c1a05, "put_disk" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xf5fa6174, "bioset_create" },
	{ 0xa3be9555, "bioset_integrity_create" },
	{ 0xbc3cf63a, "bd_release_from_disk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x9cfaee5b, "wake_up_process" },
	{ 0x28c5f1fb, "blk_integrity_unregister" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x50b5cb2d, "idr_get_new_above" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xf426620c, "blk_stop_queue" },
	{ 0x8432cd5f, "blk_rq_unprep_clone" },
	{ 0x650fb346, "add_wait_queue" },
	{ 0x69939cf4, "freeze_bdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0xc650e145, "blk_limits_max_hw_sectors" },
	{ 0x7da90aa5, "blk_init_allocated_queue" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x721b1851, "skip_spaces" },
	{ 0x1e479d12, "add_disk" },
	{ 0x8e33c588, "blk_end_request_all" },
	{ 0xa2cc8f22, "blk_rq_prep_clone" },
	{ 0xd888d59b, "blk_requeue_request" },
	{ 0x49285bb4, "blk_complete_request" },
	{ 0xa8fbf582, "idr_replace" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x6928f936, "blk_queue_lld_busy" },
	{ 0x9edbecae, "snprintf" },
	{ 0x9a4330fd, "vmalloc_to_page" },
	{ 0x9b54de3c, "zero_fill_bio" },
	{ 0xe25a08cb, "bioset_free" },
	{ 0x4bdf028e, "idr_find" },
	{ 0xbb26c06f, "bdget_disk" },
	{ 0xc53c882d, "idr_get_new" },
	{ 0x3302b500, "copy_from_user" },
	{ 0x91fa8e1b, "misc_deregister" },
	{ 0x171de55d, "bdput" },
	{ 0xa2b8a2ba, "__init_rwsem" },
	{ 0xc8a7be7a, "blk_start_request" },
	{ 0xd1581077, "clear_user" },
	{ 0xeed11f99, "blk_integrity_register" },
	{ 0xe914e41e, "strcpy" },
	{ 0x41c98ff5, "set_disk_ro" },
	{ 0xb9eb3aa9, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9AD5061E7047891EA9592A2");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
