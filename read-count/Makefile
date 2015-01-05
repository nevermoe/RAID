#GCOV_PROFILE := y
#CFLAGS += -fprofile-arcs -ftest-coverage
#EXTRA_CFLAGS += -fprofile-arcs -ftest-coverage

obj-m := filter.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:	
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
