insmod filter.ko &&
sleep 1 &&
mdadm --stop /dev/md0 
mdadm --stop /dev/md12*
sleep 1
mdadm -CR /dev/md0 -l4 -n3 /dev/sdb /dev/rc /dev/sdd --assume-clean -e0 -c64
sleep 1
#dd if=/dev/md0 of=/dev/null bs=64K count=1 skip=1 iflag=direct
#sleep 5 
mdadm --stop /dev/md0
#mdadm --zero-superblock /dev/sdb
#mdadm --zero-superblock /dev/rc
#mdadm --zero-superblock /dev/sdd
sleep 1
dmesg -c && clear
rmmod filter
dmesg

