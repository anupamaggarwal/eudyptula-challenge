obj-m +=hello.o

CFLAGS_MODULE=-Werror

KDIR ?=/lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR) M=$(PWD) modules



cleanup:
	make -C $(KDIR) M=$(PWD) clean
