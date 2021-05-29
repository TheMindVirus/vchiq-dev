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
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4766f3ab, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0x582ed8ca, "vchiq_bulk_receive" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85c26c09, "vc_sm_cma_import_dmabuf" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa346975c, "idr_remove" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x713b5716, "vchiq_shutdown" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0x241b709f, "vchiq_open_service" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5c429da, "vchiq_initialise" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0x2f3516ab, "vchiq_connect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x47925794, "idr_find" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "vc-sm-cma");


MODULE_INFO(srcversion, "E7B12262FD5FAB1825C9A93");
