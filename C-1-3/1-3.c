#include <stdio.h>

void butler(void);   //����ԭ�ͣ�ҪΪ�������õ��ĺ����ṩ����ԭ��//

int main(void)  //����main����λ�ڵڼ��У���������ִ�е�//
{
	printf("Are you ok?.\n");
	butler(); //����butler()����//
	printf("Yes,I'm ok.\n");
	
	return 0;
}

void butler(void) //�������忪ʼ//
{
	printf("ni cai.\n");
}