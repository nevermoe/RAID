RAID
====

Optimized the RAID456 module in Linux. It reduced the RAID I/O by
50% under certain I/O pattern. Please read [This paper](http://www.cs.cuhk.hk/~cslui/PUBLICATION/P162.pdf) for more infomation.

Prerequisites:
  
      centos60，kernel-2.6.32
      
File lists:
      
      raid5.patch----A patch file, which you could use it to patch your own kernel.
      read-count/*----Contains the test scripts and programs.
      raid456.ko----This is the module file in case that you don't want to compile the module yourself, 
                    just make install, and insmod raid456.ko


