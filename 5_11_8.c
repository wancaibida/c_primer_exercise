#include <stdio.h>

#define A 1.8
#define B 32.0
#define C 273.16

void temperatures(double f);

int main(void)
{
	double f;

	printf("Enter a temp: \n");

	while(scanf("%lf",&f))
	{
		temperatures(f);
	}

	return 0;
}


void temperatures(double f)
{
	double total;
	total = A*f+B;
	printf("%.2f\n",total);
	printf("%.2f\n", total+C);
}