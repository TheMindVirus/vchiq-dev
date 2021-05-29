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
	{ 0xc524256, "vb2_ioctl_reqbufs" },
	{ 0x63de71d7, "vchiq_mmal_port_set_format" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0xe562f9be, "v4l2_event_unsubscribe" },
	{ 0x41bd9da6, "vchiq_mmal_port_disable" },
	{ 0x9871c739, "video_device_release_empty" },
	{ 0xef7027df, "media_device_unregister_entity" },
	{ 0x632848b0, "media_devnode_create" },
	{ 0x4430098, "vchiq_mmal_port_parameter_set" },
	{ 0x657b6a1e, "vb2_wait_for_all_buffers" },
	{ 0x2b932d7d, "v4l2_device_unregister" },
	{ 0x404eec2e, "v4l2_ctrl_handler_free" },
	{ 0xb2eb7373, "v4l2_ctrl_new_std" },
	{ 0xbbd93955, "vb2_fop_poll" },
	{ 0xa4bf5ff5, "vb2_ioctl_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x106c019d, "__video_register_device" },
	{ 0xeea0399, "strscpy" },
	{ 0x13f8c478, "__platform_driver_register" },
	{ 0xb356dcf1, "v4l2_device_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x80d381a, "media_remove_intf_links" },
	{ 0x7b85cc20, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0xe85cad29, "vb2_fop_mmap" },
	{ 0xb0c29a8d, "vb2_ioctl_qbuf" },
	{ 0xb4bf9f2f, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xaa85a8e4, "video_unregister_device" },
	{ 0x331da384, "media_entity_pads_init" },
	{ 0x85c26c09, "vc_sm_cma_import_dmabuf" },
	{ 0x4ed7cd2e, "v4l2_ctrl_subscribe_event" },
	{ 0xd04956b, "vb2_plane_vaddr" },
	{ 0x9836fefc, "vb2_buffer_done" },
	{ 0x4aa52bc4, "dma_buf_put" },
	{ 0x489ae09c, "dma_buf_get" },
	{ 0x9f07e95f, "vchiq_mmal_component_enable" },
	{ 0x98fda9d8, "vb2_ioctl_prepare_buf" },
	{ 0xff7d2590, "v4l2_ctrl_new_custom" },
	{ 0x5cfa62b3, "vb2_ioctl_create_bufs" },
	{ 0xe4737f9d, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xd46c6f4f, "media_device_cleanup" },
	{ 0x84f914ec, "media_device_register_entity" },
	{ 0x6b7165ae, "vchiq_mmal_component_init" },
	{ 0x6645130, "vb2_fop_release" },
	{ 0x22a7a6e2, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf67ddcc4, "vchiq_mmal_component_disable" },
	{ 0x8a6f59fe, "mmal_vchi_buffer_init" },
	{ 0x987519a6, "media_create_pad_link" },
	{ 0x46b8afa3, "media_entity_remove_links" },
	{ 0xcd684e28, "media_create_intf_link" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0x31258dc2, "v4l2_fh_open" },
	{ 0x2cd90579, "vchiq_mmal_port_enable" },
	{ 0xf77a7e2f, "vb2_ioctl_querybuf" },
	{ 0xeae15906, "__media_device_register" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0xe281cd6, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bab9783, "vchiq_mmal_submit_buffer" },
	{ 0x21acc440, "v4l2_ctrl_handler_init_class" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3d0339ed, "media_device_init" },
	{ 0x18cbff1, "vb2_ioctl_expbuf" },
	{ 0xb81fef38, "mmal_vchi_buffer_cleanup" },
	{ 0x97e5f278, "platform_driver_unregister" },
	{ 0xa11cc858, "vb2_ioctl_streamoff" },
	{ 0x4185d389, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xb44e5ac7, "vb2_queue_release" },
	{ 0x1dd63fc9, "param_ops_uint" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xf1649e07, "media_device_unregister" },
	{ 0x673a162c, "video_ioctl2" },
	{ 0x2113a6f6, "vb2_core_expbuf_dmabuf" },
	{ 0xe0725aaf, "media_devnode_remove" },
	{ 0xe9786c46, "vchiq_mmal_port_parameter_get" },
	{ 0x62fd3f5c, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,mc,videobuf2-common,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "86D793ADB4B99751C2E8FE5");
