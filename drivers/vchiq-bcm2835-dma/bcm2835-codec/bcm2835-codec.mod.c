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
	{ 0x2a0f1ef3, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x63de71d7, "vchiq_mmal_port_set_format" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0xe562f9be, "v4l2_event_unsubscribe" },
	{ 0x41bd9da6, "vchiq_mmal_port_disable" },
	{ 0x7844db40, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x11f12752, "v4l2_m2m_register_media_controller" },
	{ 0x9871c739, "video_device_release_empty" },
	{ 0xebe2ba0c, "v4l2_event_queue_fh" },
	{ 0xadee4c82, "param_ops_int" },
	{ 0x5e3dd026, "v4l2_m2m_ctx_init" },
	{ 0x4430098, "vchiq_mmal_port_parameter_set" },
	{ 0x2b932d7d, "v4l2_device_unregister" },
	{ 0x404eec2e, "v4l2_ctrl_handler_free" },
	{ 0xb2eb7373, "v4l2_ctrl_new_std" },
	{ 0xb36b4224, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x106c019d, "__video_register_device" },
	{ 0x69a4d9e9, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa64ab34, "v4l2_m2m_fop_mmap" },
	{ 0xeea0399, "strscpy" },
	{ 0x13f8c478, "__platform_driver_register" },
	{ 0x2eaa214, "v4l2_m2m_ioctl_streamon" },
	{ 0xb356dcf1, "v4l2_device_register" },
	{ 0x160f6d5c, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8eb825f2, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x7b85cc20, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xb4bf9f2f, "v4l2_event_subscribe" },
	{ 0x76b74f4b, "v4l2_m2m_ioctl_streamoff" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xaa85a8e4, "video_unregister_device" },
	{ 0x489115a2, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x2126548b, "v4l2_fh_init" },
	{ 0x4ed7cd2e, "v4l2_ctrl_subscribe_event" },
	{ 0xd04956b, "vb2_plane_vaddr" },
	{ 0x9836fefc, "vb2_buffer_done" },
	{ 0x4aa52bc4, "dma_buf_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0x489ae09c, "dma_buf_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x9f07e95f, "vchiq_mmal_component_enable" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xd46c6f4f, "media_device_cleanup" },
	{ 0xcdc8a219, "v4l2_m2m_get_vq" },
	{ 0x6b7165ae, "vchiq_mmal_component_init" },
	{ 0x96a017cb, "v4l2_ctrl_find" },
	{ 0x8e60ee49, "v4l2_m2m_ioctl_qbuf" },
	{ 0x3a90af43, "v4l2_m2m_fop_poll" },
	{ 0x22a7a6e2, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x292342b3, "v4l2_m2m_buf_queue" },
	{ 0xd4bc878e, "v4l2_ctrl_handler_setup" },
	{ 0xf67ddcc4, "vchiq_mmal_component_disable" },
	{ 0xfd0432, "v4l2_m2m_ioctl_querybuf" },
	{ 0x8a6f59fe, "mmal_vchi_buffer_init" },
	{ 0xbb184aa3, "v4l2_m2m_ioctl_expbuf" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0x2cd90579, "vchiq_mmal_port_enable" },
	{ 0xeae15906, "__media_device_register" },
	{ 0xe281cd6, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bab9783, "vchiq_mmal_submit_buffer" },
	{ 0x21acc440, "v4l2_ctrl_handler_init_class" },
	{ 0xe6511776, "v4l2_src_change_event_subscribe" },
	{ 0x4edcc0d3, "v4l2_m2m_buf_remove" },
	{ 0x194a1e78, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x888a9a8b, "v4l2_fh_add" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x7e640d19, "v4l2_m2m_ctx_release" },
	{ 0xbee1c28, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3d0339ed, "media_device_init" },
	{ 0xb81fef38, "mmal_vchi_buffer_cleanup" },
	{ 0x97e5f278, "platform_driver_unregister" },
	{ 0x4185d389, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x1dd63fc9, "param_ops_uint" },
	{ 0xf1649e07, "media_device_unregister" },
	{ 0x673a162c, "video_ioctl2" },
	{ 0x2113a6f6, "vb2_core_expbuf_dmabuf" },
	{ 0xe199df4c, "v4l2_m2m_job_finish" },
	{ 0xe9786c46, "vchiq_mmal_port_parameter_get" },
	{ 0xdc5728ea, "v4l2_fh_exit" },
	{ 0x62fd3f5c, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,bcm2835-mmal-vchiq,videodev,videobuf2-v4l2,videobuf2-common,mc,videobuf2-dma-contig");


MODULE_INFO(srcversion, "561DB79EAA174294F24FF52");
