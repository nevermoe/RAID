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
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0xfdf9e7bc, "dm_rh_recovery_end" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xea16a6a0, "dm_rh_get_region_size" },
	{ 0x57b57ebe, "jiffies_to_timespec" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0x9a1653bc, "dm_rh_get_state" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xe3a31b6c, "dm_io" },
	{ 0x49105f0d, "dm_rh_sector_to_region" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x73c15c02, "blk_limits_io_opt" },
	{ 0xff9ab792, "dm_table_get_md" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x62b5e9e5, "dm_mem_cache_grow" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x3a2e7667, "dm_rh_get_region_key" },
	{ 0xa28e76e6, "schedule_work" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xfce2a544, "queue_work" },
	{ 0xddee0093, "dm_region_hash_create" },
	{ 0x756e6992, "strnicmp" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xfbfc8ab1, "dm_disk" },
	{ 0xa58eca9c, "blk_limits_io_min" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x8084306d, "dm_rh_flush" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7d67e9c4, "dm_rh_delay_by_region" },
	{ 0x975540f2, "dm_mem_cache_client_destroy" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0x4cf95b48, "dm_put" },
	{ 0xba6dbd78, "dm_rh_recovery_start" },
	{ 0xaf22544b, "dm_rh_inc" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x68b01e9c, "dm_rh_recovery_prepare" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x7648af8, "dm_table_event" },
	{ 0x243e48d, "dm_mem_cache_free" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xe5950cdd, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0x7329e40d, "kmem_cache_free" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0xc2758038, "dm_mem_cache_alloc" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xca26e9a5, "blk_unplug" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0x544c6919, "dm_rh_stop_recovery" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xf5cdd814, "dm_mem_cache_client_create" },
	{ 0x7652c0bd, "dm_rh_region_to_sector" },
	{ 0xee065ced, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0xeb8ad5b7, "bdevname" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x92864895, "dm_region_hash_destroy" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x27c8104b, "dm_dirty_log_destroy" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x88bc5994, "dm_rh_start_recovery" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0xcd83dd89, "dm_rh_update_states" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0x8f5ede7e, "dm_mem_cache_shrink" },
	{ 0x9edbecae, "snprintf" },
	{ 0xacb0e54a, "queue_delayed_work" },
	{ 0x34987439, "dm_dirty_log_create" },
	{ 0x7dd60ddf, "dm_rh_dec" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-mod,dm-memcache,xor,dm-log";


MODULE_INFO(srcversion, "752182B0DD0C943646F7BD9");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
