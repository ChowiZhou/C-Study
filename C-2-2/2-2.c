#include <stdio.h>
int main(void)
{
	float wet;
	float gaokuanbi;
	float hit;

	printf("请输入你的体重和身高，获取倍数。\n");
	printf("体重：");
	scanf_s("%f", &wet);
	printf("身高：");
	scanf_s("%f", &hit);
	gaokuanbi = (wet +hit) / 2;
	printf("你的体重身高比为%.2f.\n", gaokuanbi);

	return 0;

}