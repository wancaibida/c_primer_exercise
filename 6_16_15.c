#include <stdio.h>
#define RATE0 0.1f
#define RATE1 0.05f
#define START 100

int main(void)
{
	float a,b;
	int year;
	a = b= START;

	for(year =0;b<=a;++year)
	{
		a += START*RATE0;
		b *= (1.0+RATE1);
	}

	printf("after %d years, a is %f and b is %f\n",year,a,b );

	return 0;
}
