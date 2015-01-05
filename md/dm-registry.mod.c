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
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x1a75caa3, "_read_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xea147363, "printk" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0xb4390f9a, "mcount" },
	{ 0x521445b, "list_del" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xd7a612d, "module_put" },
	{ 0x9d258f, "_write_lock" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x3285cc48, "param_set_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3CD4080647C8CD99A7C433E");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
