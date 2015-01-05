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
	{ 0xe95fa973, "per_cpu__current_task" },
	{ 0xcff53400, "kref_put" },
	{ 0x25ec1b28, "strlen" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0xfa2e111f, "slab_buffer_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xff9ab792, "dm_table_get_md" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xfce2a544, "queue_work" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xfbfc8ab1, "dm_disk" },
	{ 0x343a1a8, "__list_add" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xf85ccdae, "kmem_cache_alloc_notrace" },
	{ 0xe5950cdd, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x5e40d11c, "destroy_workqueue" },
	{ 0x717ea2bf, "__create_workqueue_key" },
	{ 0xc488443b, "flush_workqueue" },
	{ 0x620c74ce, "bio_endio" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xeb5e5c9d, "dm_put_type" },
	{ 0x1000e51, "schedule" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0xf3549a98, "dm_get_type" },
	{ 0x9b54de3c, "zero_fill_bio" },
	{ 0xbb26c06f, "bdget_disk" },
	{ 0x171de55d, "bdput" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-registry";


MODULE_INFO(srcversion, "FB413784E1E5021CD727B78");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
