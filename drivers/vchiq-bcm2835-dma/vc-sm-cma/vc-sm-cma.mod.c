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
	{ 0x32c3ca87, "v7_dma_flush_range" },
	{ 0x66a4d931, "dma_map_sg_attrs" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x915b64aa, "debugfs_create_dir" },
	{ 0x2a15cc69, "single_open" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0x97255bdf, "strlen" },
	{ 0xc407cff0, "vchiq_msg_queue_push" },
	{ 0xb66871f1, "dma_unmap_sg_attrs" },
	{ 0xcfc1784, "dma_get_sgtable_attrs" },
	{ 0x7761ff17, "single_release" },
	{ 0x88eedf39, "dma_mmap_attrs" },
	{ 0x204933ca, "seq_puts" },
	{ 0x9e174004, "dma_buf_detach" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0x342f6139, "seq_printf" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3f44edb6, "dma_free_attrs" },
	{ 0xc6fcaf47, "debugfs_create_file" },
	{ 0xe4302601, "seq_read" },
	{ 0x9d67ded2, "kthread_create_on_node" },
	{ 0x13f8c478, "__platform_driver_register" },
	{ 0x327c3232, "vchiq_msg_hold" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0xb07832fb, "misc_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x28e36d8a, "dma_sync_sg_for_device" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x77be3d05, "dma_buf_fd" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x4aa52bc4, "dma_buf_put" },
	{ 0xd55901d9, "debugfs_remove" },
	{ 0x489ae09c, "dma_buf_get" },
	{ 0x7289eabc, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xfe0224, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0xa346975c, "idr_remove" },
	{ 0x25ae7c15, "sg_alloc_table" },
	{ 0xad4a10f4, "dma_buf_map_attachment" },
	{ 0x84d541eb, "dma_buf_export" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0x241b709f, "vchiq_open_service" },
	{ 0x56653629, "wake_up_process" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x44f03b72, "dma_buf_attach" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9f929d5e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5c429da, "vchiq_initialise" },
	{ 0x581cde4e, "up" },
	{ 0x2f5e9ab1, "set_user_nice" },
	{ 0xe30ff5e6, "dma_sync_sg_for_cpu" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0x13817285, "sg_free_table" },
	{ 0x2f3516ab, "vchiq_connect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x97e5f278, "platform_driver_unregister" },
	{ 0x4185d389, "devm_kmalloc" },
	{ 0x47925794, "idr_find" },
	{ 0xf4e55ef, "misc_deregister" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DF2E279F5C18D6DDE7EAE90");
