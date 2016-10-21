#include <stdio.h>

int main(void)
{
	float water=3.0E-23;
	int unit = 950;
	float weight;
	float total;

	printf("input your water weight \n");
	scanf("%f",&weight);

	total=weight*unit/water;
	printf("%f has total secods is %f or %e atomics\n",weight,total,total);
	return 0;
}