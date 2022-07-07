#include <stdio.h> /*包含一个文件*/
int main(void) /*函数名*/
{
	int num; /*定义一个num的变量*/
	int door;
	int color;
	int mask;
	num = 1; /*给num赋予一个值*/
	door = 5;
	color = 10;
	mask = 6 * color; /*可以使用乘法*/

	printf("I am a simple "); /*使用prinft()函数*/
	printf("computer.\n"); /*/n作用为另起一行*/
	printf("My favorite number is %d because it is first.\n", num);/*把num的值嵌到双引号内，%d为嵌入位置*/
	/*以下为拓展练习*/
	printf("我有%d苹果.\n", num);
	printf("你有几个苹果.\n"); 
	printf("你有%d个人.\n", door);
	printf("I have %d apple.\n", color);
	printf("I have %d bananer.\n", mask);

	return 0;
}
