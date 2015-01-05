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
	{ 0xa204f481, "alloc_pages_current" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xe5e80f08, "dm_get_device" },
	{ 0x3e77201e, "md_raid5_congested" },
	{ 0x954fe335, "md_stop" },
	{ 0x73c15c02, "blk_limits_io_opt" },
	{ 0xa637f335, "md_raid1_unplug_device" },
	{ 0x6dd938ec, "mddev_suspend" },
	{ 0xa5375d6c, "dm_table_get_mode" },
	{ 0xfcaa6864, "md_raid5_unplug_device" },
	{ 0x369499b9, "mutex_unlock" },
	{ 0xf5849c47, "dm_register_target" },
	{ 0xa58eca9c, "blk_limits_io_min" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7648af8, "dm_table_event" },
	{ 0x486b6407, "hweight64" },
	{ 0xea147363, "printk" },
	{ 0x23269a13, "strict_strtoul" },
	{ 0xc9c90a42, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe71a283b, "mutex_lock" },
	{ 0x467253ab, "raid5_set_cache_size" },
	{ 0xc6fa412a, "mark_tech_preview" },
	{ 0xbb29b267, "__gcov_merge_add" },
	{ 0xc8f3315a, "md_raid1_congested" },
	{ 0x9dc5ee7, "__gcov_init" },
	{ 0x85c1253c, "md_run" },
	{ 0x7703c0b9, "sync_page_io" },
	{ 0xe98fdd23, "mddev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ef879bd, "bitmap_load" },
	{ 0xd215b82b, "put_page" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x1139f6, "md_rdev_init" },
	{ 0x6316e17f, "dm_put_device" },
	{ 0x4ad89c7b, "mddev_resume" },
	{ 0x8a071ec1, "dm_table_add_target_callbacks" },
	{ 0x747203da, "md_stop_writes" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid456,raid1";


MODULE_INFO(srcversion, "E2ABBFCF9DC7B4FE12DFEF0");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 2,
};
