#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5b3035d2, "module_layout" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1a75caa3, "_read_lock" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x343a1a8, "__list_add" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0x150853cf, "down_trylock" },
	{ 0xea147363, "printk" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xb4390f9a, "mcount" },
	{ 0x521445b, "list_del" },
	{ 0x748caf40, "down" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd26a76d, "_write_lock_irq" },
	{ 0xa56f1315, "mempool_free" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f1899f1, "up" },
	{ 0x27c8104b, "dm_dirty_log_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-log";


MODULE_INFO(srcversion, "D4E734BD9A61ADA90CD0F55");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
