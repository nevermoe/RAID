cmd_drivers/md/raid456.o := ld -m elf_x86_64   -r -o drivers/md/raid456.o drivers/md/raid5.o ; scripts/mod/modpost drivers/md/raid456.o
