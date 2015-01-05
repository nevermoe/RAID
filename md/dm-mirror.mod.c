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
	{ 0x9a1653bc, "dm_rh_get_state" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xe3a31b6c, "dm_io" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xff2300d4, "dm_rh_inc_pending" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x3a2e7667, "dm_rh_get_region_key" },
	{ 0xa28e76e6, "schedule_work" },
	{ 0xc2fe568, "dm_kcopyd_client_destroy" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0xddee0093, "dm_region_hash_create" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x8d023392, "dm_kcopyd_copy" },
	{ 0x34134404, "dm_rh_region_context" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8084306d, "dm_rh_flush" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0xba6dbd78, "dm_rh_recovery_start" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x68b01e9c, "dm_rh_recovery_prepare" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x65e6fc37, "dm_rh_bio_to_region" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x7648af8, "dm_table_event" },
	{ 0x612d6e7d, "dm_table_unplug_all" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xb4390f9a, "mcount" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x46085e4f, "add_timer" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0x544c6919, "dm_rh_stop_recovery" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xed7430b5, "dm_rh_dirty_log" },
	{ 0x7652c0bd, "dm_rh_region_to_sector" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x29a43ec, "dm_kcopyd_client_create" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x92864895, "dm_region_hash_destroy" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b3803a7, "dm_rh_mark_nosync" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x27c8104b, "dm_dirty_log_destroy" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x88bc5994, "dm_rh_start_recovery" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0xcd83dd89, "dm_rh_update_states" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0xd2f62760, "dm_noflush_suspending" },
	{ 0x9705e5df, "dm_rh_recovery_in_flight" },
	{ 0x7fabf4d1, "dm_rh_delay" },
	{ 0x34987439, "dm_dirty_log_create" },
	{ 0x7dd60ddf, "dm_rh_dec" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-mod,dm-log";


MODULE_INFO(srcversion, "84C4FF236EC7949FFDA87E1");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
