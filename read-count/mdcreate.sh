insmod filter.ko
sleep 1
mdadm --stop /dev/md4
sleep 1
rm -f /home/wanghui/bitmap/bm
sleep 1
dmesg -c
sleep 1
mdadm -CR /dev/md4 -n3 -l4 /dev/sdb /dev/rc /dev/sdd --bitmap=/home/wanghui/bitmap/bm --bitmap-chunk=4K -e1 --assume-clean
sleep 1
# #echo "0 4193280 skip 2 1024  /dev/md4 0" | dmsetup create split
# #sleep 1
# mdadm --fail /dev/md4 /dev/sdb
# sleep 1
# mdadm --remove /dev/md4 /dev/sdb
# sleep 2
# mdadm --zero-superblock /dev/sdb
# sleep 1
# # mdadm -D /dev/md4
# # sleep 1
# echo 1 >/sys/block/md4/md/bitmap_bits_flag
# sleep 1
# # # echo "0-524159" >/sys/block/md4/md/bitmap_set_bits
# echo "0-523903" >/sys/block/md4/md/bitmap_set_bits
# # echo "0-511" >/sys/block/md4/md/bitmap_set_bits
# sleep 1
