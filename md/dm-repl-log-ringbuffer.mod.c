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
	{ 0x77a108df, "_write_unlock_irqrestore" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0xcff53400, "kref_put" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x25ec1b28, "strlen" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xe3a31b6c, "dm_io" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x149397f, "dm_unregister_type" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xaab06af8, "_write_lock_irqsave" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0x756e6992, "strnicmp" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0x9422858a, "dm_descr_name" },
	{ 0x999e8297, "vfree" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x9c979b6, "dm_register_type" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xde0bdcff, "memset" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xb778a6e5, "dm_descr_type" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe5950cdd, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xca26e9a5, "blk_unplug" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x2eb9a0e8, "_read_lock_irq" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xd26a76d, "_write_lock_irq" },
	{ 0xa56f1315, "mempool_free" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xe24050c7, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x6316e17f, "dm_put_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-registry,dm-replicator";


MODULE_INFO(srcversion, "EF06959DBC8C5D439FFC093");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
