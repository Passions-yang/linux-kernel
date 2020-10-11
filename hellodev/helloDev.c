#include <linux/module.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/wait.h>
#include <linux/poll.h>
#include <linux/sched.h>
#include <linux/slab.h>

#define BUFFER_MAX  10
#define OK  0
#define ERROR   -1



int __init hello_init(void)
{
    printk("hello init\n");
    return OK;
}
void __exit hello_exit(void)
{
    printk(" hello exit \n");
}
module_init(hello_init); // 内核模块入口函数 运行insmod会调用此接口
module_exit(hello_exit); // 内核模块推出函数 运行rmmod会调用次接口
MODULE_LICENSE("GPL");


