#include <stdio.h>
int main(void)
{
	int centimeter, meter; //һ����������ʹ����������
	centimeter = 1;
	meter = 100 * centimeter; //��������ʹ�ó˷�

	printf("%dmeter in %dcentimeter!\n ", centimeter, meter); //������ռλ��λ�û����Ӧ
	printf("Yes,I said %d meter.\n", 100 * centimeter);  

	return 0;
}