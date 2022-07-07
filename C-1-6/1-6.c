#include <stdio.h>

void jolly(void);
void deny(void);
void br(void);
void ic(void);
void Smile(void);

int main(void)
{
	int toes;
	toes = 10;
	
	printf("toes*2 = %d\ntoes2 = %d\n", toes * 2, toes * toes);

	jolly();
	jolly();
	jolly();
	deny();

	br();
	printf(",");
	ic();
	ic();
	br();
	printf("\n");

	printf("Smile!Smile!");
	Smile();
	printf("Smile!");
	Smile();
	Smile();

	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}

void br(void)
{
	printf("Brazil,Russia");
}

void ic(void)
{
	printf("India,China\n");
}

void Smile(void)
{
	printf("Smile!\n");
}