#include<stdio.h>
#include<stdlib.h>
struct memory_write *filewrite
{  
     .open=dev_open_the_device_to_hadle,
     .close=dev_close_the_device_to_resume,
     .write=dev_to_write_device_to_update,
     .read=dev_to_read_device_to_read,   
};
static int memory_write_data(struct memory_write *val,0,NULL,semichip)
{
     printk(KERN_ALERT"write the data to device \n");
     return 0;
}
static int memory_read_data(struct memory_write *val,semichip)
{
    printk(KERN_ALERT"read the device from device \n");
    return 0;
}
static int open_the_device(struct memory_write *val,int cmd,long arg)
{
    printk(KERN_ALERT"open the device \n");   
}
static ioctl(struct file *fil,int cmd,long args)
{
  printk(KERN_ALERT"IOCTL FUNCTIONAL TO READ AND WRITE ANY DEVICE \n");
}
