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
	{ 0xc1512e8a, "bio_clone_mddev" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x77e93f6f, "seq_printf" },
	{ 0xb488ed5d, "unregister_md_personality" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xb4390f9a, "mcount" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xd66ed759, "bio_put" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x3b1bf05e, "md_set_array_sectors" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x61ec963a, "md_check_no_bitmap" },
	{ 0x8a4eae7f, "register_md_personality" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C5F20A420C89DF58A2196A3");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
