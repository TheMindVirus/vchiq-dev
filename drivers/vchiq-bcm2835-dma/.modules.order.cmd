cmd_/home/pi/Documents/vchiq/modules.order := {   cat /home/pi/Documents/vchiq/bcm2835-audio/modules.order;   cat /home/pi/Documents/vchiq/bcm2835-camera/modules.order;   cat /home/pi/Documents/vchiq/vchiq-mmal/modules.order;   cat /home/pi/Documents/vchiq/vc-sm-cma/modules.order;   cat /home/pi/Documents/vchiq/bcm2835-codec/modules.order;   cat /home/pi/Documents/vchiq/bcm2835-isp/modules.order; :; } | awk '!x[$$0]++' - > /home/pi/Documents/vchiq/modules.order