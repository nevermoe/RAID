cmd_drivers/md/built-in.o :=  ld -m elf_x86_64   -r -o drivers/md/built-in.o drivers/md/md-mod.o ; scripts/mod/modpost drivers/md/built-in.o
