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
	{ 0x66a4d931, "dma_map_sg_attrs" },
	{ 0x12bf7a4b, "kernel_write" },
	{ 0xadfb6ea0, "cdev_del" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0x60d951ec, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x761060fe, "of_dma_configure_id" },
	{ 0x7e986abe, "try_wait_for_completion" },
	{ 0x915b64aa, "debugfs_create_dir" },
	{ 0x2a15cc69, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0x1cc9a88b, "page_address" },
	{ 0xb66871f1, "dma_unmap_sg_attrs" },
	{ 0x8134d05d, "dma_set_mask" },
	{ 0x7761ff17, "single_release" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0x342f6139, "seq_printf" },
	{ 0xb37ccf3d, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x871cc899, "filp_close" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3f44edb6, "dma_free_attrs" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x24b4f060, "platform_device_register_full" },
	{ 0xc6fcaf47, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe4302601, "seq_read" },
	{ 0xd8eb6159, "set_page_dirty" },
	{ 0x9d67ded2, "kthread_create_on_node" },
	{ 0x5d5ddcbb, "dma_set_coherent_mask" },
	{ 0x13f8c478, "__platform_driver_register" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3e1be84a, "mutex_lock_killable" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xe3f4ed75, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x569ea55e, "of_device_is_available" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc5485d0, "kthread_stop" },
	{ 0x62f7cd21, "of_match_node" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd55901d9, "debugfs_remove" },
	{ 0x7289eabc, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x381da783, "kunmap_high" },
	{ 0xf0ef52e8, "down" },
	{ 0x1b6c45b6, "device_create" },
	{ 0x28f74f4a, "platform_device_unregister" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x56755c4a, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3f798f94, "of_get_child_by_name" },
	{ 0x4303a0a0, "flush_signals" },
	{ 0x31ace3dd, "cdev_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x12a38747, "usleep_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xed0ad192, "of_find_compatible_node" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x56653629, "wake_up_process" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x98889057, "rpi_firmware_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9f929d5e, "seq_lseek" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xda9ab352, "unpin_user_pages" },
	{ 0x581cde4e, "up" },
	{ 0x2f5e9ab1, "set_user_nice" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe171d059, "class_destroy" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2dac606, "dmam_alloc_attrs" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc146ded0, "platform_get_irq" },
	{ 0x7af14d82, "of_find_device_by_node" },
	{ 0x6a4e084, "kmap_high" },
	{ 0xee47e849, "vmalloc_to_page" },
	{ 0x97e5f278, "platform_driver_unregister" },
	{ 0x19ec62e4, "of_node_put" },
	{ 0xc6294569, "devm_request_threaded_irq" },
	{ 0xd74cab92, "__class_create" },
	{ 0xac94e86b, "vsprintf" },
	{ 0xbe66e87c, "devm_platform_ioremap_resource" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x2b1f0e1b, "dmam_pool_create" },
	{ 0x80c5d196, "filp_open" },
	{ 0xaf85ebbb, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vchiqC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2836-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2836-vchiqC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vchiqC*");

MODULE_INFO(srcversion, "0C743B4AE43BA3C1E6C23C7");
