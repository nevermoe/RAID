cmd_drivers/md/dm-mirror.o := ld -m elf_x86_64   -r -o drivers/md/dm-mirror.o drivers/md/dm-raid1.o ; scripts/mod/modpost drivers/md/dm-mirror.o
