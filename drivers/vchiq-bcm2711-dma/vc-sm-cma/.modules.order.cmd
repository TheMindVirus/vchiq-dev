cmd_/home/pi/Documents/vchiq/vc-sm-cma/modules.order := {   echo /home/pi/Documents/vchiq/vc-sm-cma/vc-sm-cma.ko; :; } | awk '!x[$$0]++' - > /home/pi/Documents/vchiq/vc-sm-cma/modules.order
