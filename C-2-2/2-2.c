#include <stdio.h>
int main(void)
{
	float wet;
	float gaokuanbi;
	float hit;

	printf("������������غ���ߣ���ȡ������\n");
	printf("���أ�");
	scanf_s("%f", &wet);
	printf("��ߣ�");
	scanf_s("%f", &hit);
	gaokuanbi = (wet +hit) / 2;
	printf("���������߱�Ϊ%.2f.\n", gaokuanbi);

	return 0;

}