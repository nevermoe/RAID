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
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xe5950cdd, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x45450063, "mod_timer" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xa56f1315, "mempool_free" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x6316e17f, "dm_put_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "91DE7E8F783657D3C674053");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
