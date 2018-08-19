#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
    printk(KERN_ALERT "Hello World enter\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_ALERT "Hello World exit\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("Dual BSD/GPL");

MODULE_AUTHOR("SamirBob");
MODULE_DESCRIPTION("A simple Hello World Module");
MODULE_ALIAS("a module skeleton");