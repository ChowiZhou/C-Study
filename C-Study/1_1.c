#include <stdio.h> /*����һ���ļ�*/
int main(void) /*������*/
{
	int num; /*����һ��num�ı���*/
	int door;
	int color;
	int mask;
	num = 1; /*��num����һ��ֵ*/
	door = 5;
	color = 10;
	mask = 6 * color; /*����ʹ�ó˷�*/

	printf("I am a simple "); /*ʹ��prinft()����*/
	printf("computer.\n"); /*/n����Ϊ����һ��*/
	printf("My favorite number is %d because it is first.\n", num);/*��num��ֵǶ��˫�����ڣ�%dΪǶ��λ��*/
	/*����Ϊ��չ��ϰ*/
	printf("����%dƻ��.\n", num);
	printf("���м���ƻ��.\n"); 
	printf("����%d����.\n", door);
	printf("I have %d apple.\n", color);
	printf("I have %d bananer.\n", mask);

	return 0;
}
