#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int init_module {
	printk("Hello my name is HwangJeongbae, I'm so tired\n");
	
	return 0;
}

static void exit_module() {
	printk("Jeongbae, Go to a bed\n");
}

