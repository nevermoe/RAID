dmesg -c
dmsetup remove split
mdadm -S /dev/md0
rmmod filter
dmesg
