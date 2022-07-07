#include <stdio.h>

void butler(void);   //函数原型，要为程序中用到的函数提供函数原型//

int main(void)  //无论main（）位于第几行，都是首先执行的//
{
	printf("Are you ok?.\n");
	butler(); //引用butler()函数//
	printf("Yes,I'm ok.\n");
	
	return 0;
}

void butler(void) //函数定义开始//
{
	printf("ni cai.\n");
}