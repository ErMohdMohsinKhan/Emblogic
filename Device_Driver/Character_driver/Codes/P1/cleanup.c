#include "headers.h"
#include "declarations.h"

static void __exit cleanup(void)
{
	printk(KERN_INFO "%s : Begin\n", __func__);
	printk(KERN_INFO "Bye Kernel!\n");
	printk(KERN_INFO "%s : End\n", __func__);
}

module_exit(cleanup);
