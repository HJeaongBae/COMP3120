obj-m := module.o

KDIR := /lib/modules/$(Shell uname -r)/bulid

PWD := $(shell pwd)

default :
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean :

	rm	-rf *.ko
	rm	-rf *.mod.*
	rm	-rf .*.cmd
	rm	-rf *.o
	rm	-rf .tmp_versions


