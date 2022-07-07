#include <stdio.h>
int main(void)
{
	int centimeter, meter;
	centimeter = 1;
	meter = 100 * centimeter;

	printf("There  are %d M in %d CM.\n", meter, centimeter); 

	return 0;
}