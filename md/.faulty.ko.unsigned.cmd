cmd_drivers/md/faulty.ko.unsigned := ld -r -m elf_x86_64 -T /usr/src/redhat/BUILD/kernel-2.6.32-220.el6/linux-2.6.32-220.el6vsds.x86_64/scripts/module-common.lds --build-id -o drivers/md/faulty.ko.unsigned drivers/md/faulty.o drivers/md/faulty.mod.o 