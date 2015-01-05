#!/bin/sh
i=0
while [[ $i -le 4045 ]]
do
	let j=i*2
	dd if=/dev/md4 of=/dev/null bs=512K count=1 skip=$j iflag=direct
	let i=i+1
done

#mdadm --stop /dev/md4
