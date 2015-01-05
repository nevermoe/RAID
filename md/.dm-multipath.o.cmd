cmd_drivers/md/dm-multipath.o := ld -m elf_x86_64   -r -o drivers/md/dm-multipath.o drivers/md/dm-path-selector.o drivers/md/dm-mpath.o ; scripts/mod/modpost drivers/md/dm-multipath.o
