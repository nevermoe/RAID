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
	{ 0x53326531, "mempool_alloc_pages" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x3a3dd028, "bio_alloc_bioset" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0x64999478, "congestion_wait" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0xfce2a544, "queue_work" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x1cefe352, "wait_for_completion" },
	{ 0xde0bdcff, "memset" },
	{ 0xff083dd0, "crypto_alloc_ablkcipher" },
	{ 0xda328795, "bio_free" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x143ba3ee, "bio_add_page" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0xbfa52824, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xd66ed759, "bio_put" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0xf5fa6174, "bioset_create" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x2be192df, "crypto_destroy_tfm" },
	{ 0xa56f1315, "mempool_free" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0xb6244511, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x7a4497db, "kzfree" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0xe456bd3a, "complete" },
	{ 0x9edbecae, "snprintf" },
	{ 0x69240250, "crypto_alloc_base" },
	{ 0xe25a08cb, "bioset_free" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "DEE25614AF5497C1F6507BA");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
