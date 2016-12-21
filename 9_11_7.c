#include <stdio.h>


double power(double num, int p);

int main(void)
{
	double num = 2.0;
	int p = -8;
	printf("%lf pow %d is %lf\n", num, p, power(num, p) );
	return 0;
}

double power(double num, int p)
{
	int exp;
	double t = 1;

	if (num == 0)
	{
		return 0;
	}

	if (p == 0)
	{
		return 1;
	}

	exp = p > 0 ? p : -p;

	while (exp--)
	{
		t *= num;
	}

	return p > 0 ? t : 1 / t;
}



