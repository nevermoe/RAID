cmd_drivers/md/dm-snapshot.ko := scripts/mod/mod-extract drivers/md/dm-snapshot.ko.unsigned drivers/md/dm-snapshot.ko.digest && rm -f drivers/md/dm-snapshot.ko.digest.sig && gpg --batch --no-greeting --no-default-keyring --secret-keyring ./kernel.sec --keyring ./kernel.pub --no-default-keyring --homedir . --no-options --no-auto-check-trustdb --no-permission-warning -b drivers/md/dm-snapshot.ko.digest && sh scripts/mod/modsign-note.sh drivers/md/dm-snapshot.ko.digest.sig | gcc -x assembler-with-cpp -Wp,-MD,drivers/md/.dm-snapshot.ko.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/4.4.6/include -Iinclude  -I/usr/src/redhat/BUILD/kernel-2.6.32-220.el6/linux-2.6.32-220.el6vsds.x86_64/arch/x86/include -include include/linux/autoconf.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Wno-format-security -fno-delete-null-pointer-checks -Wno-array-bounds -O2 -m64 -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -fstack-protector -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -Wframe-larger-than=2048 -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-dwarf2-cfi-asm -fconserve-stack  -fprofile-arcs -ftest-coverage  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(dm_snapshot)"  -D"KBUILD_MODNAME=KBUILD_STR(dm_snapshot.ko)" -D"DEBUG_HASH=58" -D"DEBUG_HASH2=6" -DMODULE -c -o drivers/md/dm-snapshot.ko.note.o - && ld -r -m elf_x86_64 -o drivers/md/dm-snapshot.ko drivers/md/dm-snapshot.ko.unsigned drivers/md/dm-snapshot.ko.note.o
