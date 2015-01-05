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
	{ 0xa204f481, "alloc_pages_current" },
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x61cd5af4, "plugger_init" },
	{ 0xbd98c6e1, "plugger_remove_plug" },
	{ 0xf0291aa1, "mddev_congested" },
	{ 0xc1512e8a, "bio_clone_mddev" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x71356fba, "remove_wait_queue" },
	{ 0x9bd97c9c, "md_check_recovery" },
	{ 0x7ab0250b, "md_write_end" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x77e93f6f, "seq_printf" },
	{ 0x8d8708f, "cancel_work_sync" },
	{ 0x30e71613, "bitmap_endwrite" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0x1177b16e, "bitmap_unplug" },
	{ 0xb488ed5d, "unregister_md_personality" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xcf2be08f, "revalidate_disk" },
	{ 0x343a1a8, "__list_add" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa30672a8, "blk_queue_max_segments" },
	{ 0x3ad952e7, "bitmap_start_sync" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0xfbccdb46, "md_register_thread" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xea147363, "printk" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0x143ba3ee, "bio_add_page" },
	{ 0xb3d1b451, "disk_stack_limits" },
	{ 0x878ebf95, "blk_queue_segment_boundary" },
	{ 0xc714da40, "bitmap_close_sync" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x7ebdbf25, "bio_kmalloc" },
	{ 0x521445b, "list_del" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x2b7608ff, "sysfs_remove_link" },
	{ 0x484f4811, "md_wait_for_blocked_rdev" },
	{ 0xae78c80d, "md_integrity_add_rdev" },
	{ 0xca26e9a5, "blk_unplug" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xd66ed759, "bio_put" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x98f5c5a7, "flush_signals" },
	{ 0x1b37afda, "md_done_sync" },
	{ 0x5b226477, "sysfs_create_link" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x6ce32158, "bitmap_cond_end_sync" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x7a16884c, "md_write_start" },
	{ 0xeb8ad5b7, "bdevname" },
	{ 0x8bcdeb4e, "sysfs_notify_dirent" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x59454e16, "md_allow_write" },
	{ 0x1000e51, "schedule" },
	{ 0x3b1bf05e, "md_set_array_sectors" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xd31edaa0, "md_wakeup_thread" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x7703c0b9, "sync_page_io" },
	{ 0x6be93f4f, "md_unregister_thread" },
	{ 0x650fb346, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x36ce4a17, "bitmap_startwrite" },
	{ 0x236c8c64, "memcpy" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x5bb7c63, "md_error" },
	{ 0xd215b82b, "put_page" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x977dc0cd, "md_integrity_register" },
	{ 0x8a4eae7f, "register_md_personality" },
	{ 0xb007777b, "bitmap_end_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B0332830CBEF79544CDD166");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
