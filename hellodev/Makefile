#这个makefile 会进入两次，第一次KERNELRELESE并没有只，是空
ifneq ($(KERNELRELEASE),)
obj-m := helloDev.o
else
PWD := $(shell pwd)
#KDIR := /root/work/linux-4.9.229
KDIR := /lib/modules/`uname -r`/build
#找到内核编译目录
all:
	make -C $(KDIR) M=$(PWD)
# make -C 首先会进如指定内核编译目录中，运行编译目录中makefile
# 然后再次进入这个makefile中，此时KERNELRELESE已经有值，获得需要编译的
# 文件 helloDev.o 编译此文件，生成文件。
clean:
	rm -rf *.o .helloDev.* *.ko *.mod.c *.mod *.order *.symvers *.c~ *~
endif
