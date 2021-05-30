cmd_/home/pi/Documents/vchiq/bcm2835-isp/modules.order := {   echo /home/pi/Documents/vchiq/bcm2835-isp/bcm2835-isp.ko; :; } | awk '!x[$$0]++' - > /home/pi/Documents/vchiq/bcm2835-isp/modules.order
