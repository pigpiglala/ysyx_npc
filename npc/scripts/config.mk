
Kconfig := $(NPC_HOME)/Kconfig

menuconfig: 
	kconfig-mconf $(Kconfig) 

.PHONY: menuconfig clean



