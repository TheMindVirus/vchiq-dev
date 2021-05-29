# vchiq-dev
Development of VCHIQ Remote Call Mechanism for Raspberry Pi and Broadcom VideoCoreIV GPU

Contains a heavily compressed version of https://github.com/raspberrypi/userland to 2MB \
and also out-of-tree builds of the vchiq staging driver from https://github.com/raspberrypi/linux 

Note: There is no `brcm,bcm2711-dma` linux driver at the time of writing, it does not exist. \
      What does exist is `brcm,bcm2835-dma` under raspberrypi/linux/drivers.
