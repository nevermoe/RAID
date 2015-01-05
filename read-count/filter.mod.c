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
	{ 0x51fa660f, "alloc_disk" },
	{ 0x5ed32ac9, "blk_cleanup_queue" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x1220e98a, "bd_release" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff964b25, "param_set_int" },
	{ 0xaecaa508, "set_device_ro" },
	{ 0xc0102263, "blk_alloc_queue" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xea147363, "printk" },
	{ 0x23faf3f, "del_gendisk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc5736a48, "blkdev_put" },
	{ 0x2adeea2d, "blk_queue_make_request" },
	{ 0xd13c1a05, "put_disk" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e479d12, "add_disk" },
	{ 0x9edbecae, "snprintf" },
	{ 0x4e82b0d5, "blk_queue_logical_block_size" },
	{ 0xcc03fb67, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "09529FD3D2A613F0A9DEAE4");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
