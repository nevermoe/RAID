for i in {0 .. 2046}
	do
	j = 2 * i
	dd if=/dev/md0 of=/dev/null bs=512K count=1 seek=$j iflag=direct
	done
