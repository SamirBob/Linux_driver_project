#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
    printk(KERN_ALERT "Hello, Android Driver");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, Android Driver");
}

module_init(hello_init);
module_exit(hello_exit);