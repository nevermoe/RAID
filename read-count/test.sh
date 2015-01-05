#!/bin/sh

make clean
make

rmmod filter
dmesg -c

insmod filter.ko

i=1
while [[ $i -le 200 ]]
do
	mkfs.ext3 /dev/filtera
	let i=i+1
done
