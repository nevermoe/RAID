cmd_drivers/md/md-mod.o := ld -m elf_x86_64   -r -o drivers/md/md-mod.o drivers/md/md.o drivers/md/bitmap.o ; scripts/mod/modpost drivers/md/md-mod.o
