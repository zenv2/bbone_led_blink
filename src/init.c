/*
 *
 *	Entry into bbone_led_blink module
 *
 *	author: zenv2
 *	
 */


#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("zenv2");
MODULE_DESCRIPTION("Simple kernel module to blink LED in Beaglebone (white)\
 with Yocto Linux Fido release");

#define MODULE_NAME "BBONE_LED_BLINK "

static int __init init_module(void)
{
	printk(KERN_ALERT MODULE_NAME "Hello World\n");
	return 0;
}

static void __exit cleanup_module(void)
{
	printk(KERN_ALERT MODULE_NAME "Goodbye World\n");
}

module_init(init_module);
module_exit(hello_cleanup);

