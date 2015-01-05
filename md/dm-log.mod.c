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
	{ 0xe90dcae0, "__request_module" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xe3a31b6c, "dm_io" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xcb6beb40, "hweight32" },
	{ 0x999e8297, "vfree" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0x7648af8, "dm_table_event" },
	{ 0xde0bdcff, "memset" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xb4390f9a, "mcount" },
	{ 0x521445b, "list_del" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xd7a612d, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x6316e17f, "dm_put_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "CA8E93923CA456E250E10B1");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
