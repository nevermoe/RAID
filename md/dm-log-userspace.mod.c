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
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0xcf7a962e, "cn_add_callback" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0x33f00708, "dm_dirty_log_type_unregister" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0x7648af8, "dm_table_event" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xea147363, "printk" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0x521445b, "list_del" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xb10d55bc, "cn_netlink_send" },
	{ 0x246ca4d9, "dm_dirty_log_type_register" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0xe456bd3a, "complete" },
	{ 0x3e1f073d, "wait_for_completion_timeout" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-log";


MODULE_INFO(srcversion, "B1F61066E32720C463CB673");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
