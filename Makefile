EXTRA_CFLAGS += -D__BW_RECOV__
#EXTRA_CFLAGS += -fprofile-arcs -ftest-coverage
EXTRA_CFLAGS += -fprofile-arcs -ftest-coverage -fbranch-probabilities
VERSION = $(shell uname -r)

raid456-y += raid5.o
obj-m += raid456.o


KERNELDIR ?= /lib/modules/$(VERSION)/build
PWD       := $(shell pwd)

default: 
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

install:
	install -t /lib/modules/$(VERSION)/kernel/drivers/md/ raid456.ko 
	depmod -a
clean:
	rm -rf *.o *.ko *.unsigned Module.symvers *.order *.mod.c
