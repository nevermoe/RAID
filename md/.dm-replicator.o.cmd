cmd_drivers/md/dm-replicator.o := ld -m elf_x86_64   -r -o drivers/md/dm-replicator.o drivers/md/dm-repl.o ; scripts/mod/modpost drivers/md/dm-replicator.o
