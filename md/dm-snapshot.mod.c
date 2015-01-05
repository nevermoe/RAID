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
	{ 0xe90dcae0, "__request_module" },
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe23d7acb, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xe3a31b6c, "dm_io" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xc2fe568, "dm_kcopyd_client_destroy" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x8d023392, "dm_kcopyd_copy" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x343a1a8, "__list_add" },
	{ 0xb4b0ee4e, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x7648af8, "dm_table_event" },
	{ 0xde0bdcff, "memset" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xea147363, "printk" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xb4390f9a, "mcount" },
	{ 0x7329e40d, "kmem_cache_free" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x8f102961, "dm_suspended" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xd851af78, "up_write" },
	{ 0x45d55543, "down_write" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xd7a612d, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xee065ced, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0x29a43ec, "dm_kcopyd_client_create" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xa0ceef51, "out_of_line_wait_on_bit" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x430b68b6, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x49717b39, "dm_table_get_size" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0x9edbecae, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0xa2b8a2ba, "__init_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "E75AE5D8448E08044D1A5EB");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
