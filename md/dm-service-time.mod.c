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
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x343a1a8, "__list_add" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xb4390f9a, "mcount" },
	{ 0x521445b, "list_del" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x4a2dfdc8, "dm_register_path_selector" },
	{ 0x37a0cba, "kfree" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x43d8077b, "dm_unregister_path_selector" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-multipath";


MODULE_INFO(srcversion, "FBB8584345DBDC6F41D610F");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
