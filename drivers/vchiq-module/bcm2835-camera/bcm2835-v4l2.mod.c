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
	{ 0xf9a482f9, "msleep" },
	{ 0x9871c739, "video_device_release_empty" },
	{ 0xadee4c82, "param_ops_int" },
	{ 0x9cbb53a9, "v4l2_ctrl_log_status" },
	{ 0x4430098, "vchiq_mmal_port_parameter_set" },
	{ 0x2b932d7d, "v4l2_device_unregister" },
	{ 0x404eec2e, "v4l2_ctrl_handler_free" },
	{ 0xb2eb7373, "v4l2_ctrl_new_std" },
	{ 0xbbd93955, "vb2_fop_poll" },
	{ 0xa4bf5ff5, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb36b4224, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x106c019d, "__video_register_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x13f8c478, "__platform_driver_register" },
	{ 0xb356dcf1, "v4l2_device_register" },
	{ 0xf25bec9f, "vb2_fop_read" },
	{ 0x160f6d5c, "v4l2_ctrl_new_std_menu" },
	{ 0x7b85cc20, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0x6206367a, "vb2_vmalloc_memops" },
	{ 0xe85cad29, "vb2_fop_mmap" },
	{ 0xb0c29a8d, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa70723a, "vchiq_mmal_port_connect_tunnel" },
	{ 0xaa85a8e4, "video_unregister_device" },
	{ 0x4ed7cd2e, "v4l2_ctrl_subscribe_event" },
	{ 0xd04956b, "vb2_plane_vaddr" },
	{ 0x9836fefc, "vb2_buffer_done" },
	{ 0x9f07e95f, "vchiq_mmal_component_enable" },
	{ 0x98fda9d8, "vb2_ioctl_prepare_buf" },
	{ 0x4e201c2a, "v4l2_device_set_name" },
	{ 0x5cfa62b3, "vb2_ioctl_create_bufs" },
	{ 0x56755c4a, "_dev_err" },
	{ 0xe4737f9d, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x87e122ee, "v4l2_ctrl_new_int_menu" },
	{ 0x6b7165ae, "vchiq_mmal_component_init" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x6645130, "vb2_fop_release" },
	{ 0x22a7a6e2, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf67ddcc4, "vchiq_mmal_component_disable" },
	{ 0xf010682a, "v4l2_ctrl_auto_cluster" },
	{ 0x8a6f59fe, "mmal_vchi_buffer_init" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0x31258dc2, "v4l2_fh_open" },
	{ 0x2cd90579, "vchiq_mmal_port_enable" },
	{ 0xf77a7e2f, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x7880e9b9, "param_array_ops" },
	{ 0x4bab9783, "vchiq_mmal_submit_buffer" },
	{ 0x21acc440, "v4l2_ctrl_handler_init_class" },
	{ 0x194a1e78, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x18cbff1, "vb2_ioctl_expbuf" },
	{ 0xb81fef38, "mmal_vchi_buffer_cleanup" },
	{ 0x97e5f278, "platform_driver_unregister" },
	{ 0xa11cc858, "vb2_ioctl_streamoff" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x673a162c, "video_ioctl2" },
	{ 0xe9786c46, "vchiq_mmal_port_parameter_get" },
	{ 0x62fd3f5c, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "C934156BAA56D27CCF342A3");
