# SPDX-License-Identifier: GPL-2.0
bcm2835-vchiq2-objs := vchiq_core.o vchiq_arm.o vchiq_2835_arm.o vchiq_debugfs.o vchiq_connected.o

obj-$(CONFIG_VIDEO_ISP_BCM2835) += bcm2835-vchiq2.o

ccflags-y += \
	-I$(srctree)/drivers/staging/vc04_services \
	-D__VCCOREVER__=0x04000000
