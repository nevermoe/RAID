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
	{ 0xf2807c49, "scsi_dh_set_params" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0xe90dcae0, "__request_module" },
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xe23d7acb, "up_read" },
	{ 0x25ec1b28, "strlen" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xfcbc82b, "dm_path_uevent" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x71356fba, "remove_wait_queue" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0xa28e76e6, "schedule_work" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0x855ae51a, "dm_requeue_unmapped_request" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x2a850025, "dm_get_rq_mapinfo" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb4b0ee4e, "down_read" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe04f7caa, "dm_read_arg_group" },
	{ 0x7648af8, "dm_table_event" },
	{ 0xa2749954, "__blkdev_driver_ioctl" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xe5950cdd, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0xd1324773, "scsi_dh_activate" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0x3bec942, "scsi_dh_attach" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xb4390f9a, "mcount" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x46feb099, "dm_read_arg" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x8f102961, "dm_suspended" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xd851af78, "up_write" },
	{ 0x45d55543, "down_write" },
	{ 0x593a36c2, "scsi_dh_handler_exist" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xd7a612d, "module_put" },
	{ 0x201c889b, "dm_dispatch_request" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0x75f3bfb5, "dm_underlying_device_busy" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x650fb346, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x661f99c9, "scsi_dh_detach" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0xd2f62760, "dm_noflush_suspending" },
	{ 0xdf793802, "dm_kill_unmapped_request" },
	{ 0xacb0e54a, "queue_delayed_work" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "2F02C333CF96239067DF3D5");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
