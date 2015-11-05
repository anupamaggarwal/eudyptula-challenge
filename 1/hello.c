#include <linux/module.h>
#include<linux/sysctl.h>
#include <linux/kernel.h>



#define DRIVER_AUTHOR "aagga15[anupam.aggarwal@gmail.com]"
#define DRIVER_DESC "toyProgram"

MODULE_AUTHOR(DRIVER_AUTHOR);	
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

int init_module(void)
{
	printk(KERN_DEBUG  "Hello World!");
	return 0;
}

void cleanup_module(void){
	printk(KERN_DEBUG "[] GoodBye World!");
}
