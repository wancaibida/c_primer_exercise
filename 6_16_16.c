#include <stdio.h>
#define TAKE 10.0f
#define RATE 0.08f
#define START 100

int main(void)
{
	float a;
	int year;

	for(a=START,year =0;a>0;++year)
	{
		a *= (1+RATE);
		a -= TAKE;
	}

	printf("after %d years, a is %f blank\n",year,a );

	return 0;
}
