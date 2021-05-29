#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4766f3ab, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0xc6b09219, "snd_pcm_hw_constraint_step" },
	{ 0x567ff7a8, "of_parse_phandle" },
	{ 0x2f6df27f, "snd_pcm_period_elapsed" },
	{ 0x5d8f10b7, "devres_find" },
	{ 0x92b2feb4, "vchiq_bulk_transmit" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x69a4d9e9, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x424fc713, "snd_pcm_stream_lock" },
	{ 0xeea0399, "strscpy" },
	{ 0x6635e115, "devres_alloc_node" },
	{ 0x13f8c478, "__platform_driver_register" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe3f4ed75, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb9be5222, "snd_pcm_set_managed_buffer_all" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xea533d97, "snd_pcm_set_ops" },
	{ 0x9aa4fd62, "of_find_property" },
	{ 0x8ff6c2b1, "vchiq_get_peer_version" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x56755c4a, "_dev_err" },
	{ 0xe2d9e07c, "snd_card_new" },
	{ 0x1bdd03d8, "devm_add_action" },
	{ 0xffeaebe8, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81578093, "snd_pcm_stream_unlock" },
	{ 0x713b5716, "vchiq_shutdown" },
	{ 0x2ba89274, "snd_ctl_new1" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0x241b709f, "vchiq_open_service" },
	{ 0x988027b9, "devres_add" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0x98889057, "rpi_firmware_get" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5c429da, "vchiq_initialise" },
	{ 0x93529205, "snd_pcm_hw_constraint_minmax" },
	{ 0x95e77ed2, "snd_pcm_stop" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x1702d97a, "snd_card_free" },
	{ 0xc26e046e, "snd_card_register" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0x2f3516ab, "vchiq_connect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x9a7b53fc, "snd_pcm_new" },
	{ 0xec9d20d8, "snd_ctl_add" },
	{ 0x97e5f278, "platform_driver_unregister" },
	{ 0x6e0d89fc, "of_property_read_variable_u32_array" },
	{ 0x19ec62e4, "of_node_put" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "61FBAD59CAC50D2D0F2BEBF");
