#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adam K. Sumner");
MODULE_DESCRIPTION("We all gotta start somewhere");

static int __init hello_init(void){
  printk(KERN_DEBUG "I'm now around here! Hello!\n");
  return 0;
}

static void __exit hello_cleanup(void){
  printk(KERN_DEBUG "Goodbye, but mark my words. I'll be back!\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
