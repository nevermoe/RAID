insmod filter.ko
modprobe dm-skip
sleep 1
mdadm --stop /dev/md0
mdadm --stop /dev/md12*
sleep 1
mdadm -CR /dev/md0 -l4 -n3 /dev/sdb /dev/rc /dev/sdd --assume-clean -e0 -c64
sleep 1
echo '0 4193280 skip 2 128 /dev/md0 0'|dmsetup create split
sleep 1
mdadm --fail /dev/md0 /dev/sdb
sleep 1
mdadm --remove /dev/md0 /dev/sdb
sleep 1
mdadm --zero-superblock /dev/sdb
sleep 1
mdadm --add /dev/md0 /dev/sdb
sleep 1
watch 'mdadm -D /dev/md0'
