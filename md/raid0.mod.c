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
	{ 0xc48ea17b, "bio_split" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x805ce634, "blk_queue_io_opt" },
	{ 0xf0291aa1, "mddev_congested" },
	{ 0x705b3798, "blk_queue_max_hw_sectors" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x7b58636d, "blk_queue_io_min" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x77e93f6f, "seq_printf" },
	{ 0xb488ed5d, "unregister_md_personality" },
	{ 0xa30672a8, "blk_queue_max_segments" },
	{ 0xa65c4554, "md_flush_request" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xec7d53ef, "bio_pair_release" },
	{ 0xea147363, "printk" },
	{ 0xb3d1b451, "disk_stack_limits" },
	{ 0x878ebf95, "blk_queue_segment_boundary" },
	{ 0xb4390f9a, "mcount" },
	{ 0x84dfe564, "blk_sync_queue" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0xca26e9a5, "blk_unplug" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xeb8ad5b7, "bdevname" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3b1bf05e, "md_set_array_sectors" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x61ec963a, "md_check_no_bitmap" },
	{ 0x977dc0cd, "md_integrity_register" },
	{ 0x8a4eae7f, "register_md_personality" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E79DD649AF88A5DE915E09");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
