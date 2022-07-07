#include <stdio.h>
int main(void)
{
	int centimeter, meter; //一个声明可以使用两个变量
	centimeter = 1;
	meter = 100 * centimeter; //变量可以使用乘法

	printf("%dmeter in %dcentimeter!\n ", centimeter, meter); //变量与占位符位置互相对应
	printf("Yes,I said %d meter.\n", 100 * centimeter);  

	return 0;
}