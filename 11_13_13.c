#include <stdio.h>
#include <math.h>

double power(double base , int n);

int main(void)
{
	double base;
	int n;

	while (scanf("%lf %d", &base, &n) == 2)
	{
		printf("The result is %lf \n", power(base, n));
	}

	return 0;
}

double power(double base , int n)
{
	double sum;
	int flag = 0;
	if (fabs(base) < 10e-7)
	{
		return 0.0;
	}

	if (n == 0)
	{
		return 1.0;
	}

	n = n > 0 ? n : -n;

	sum = base;
	while (--n)
	{
		sum *= base;
	}

	return flag ? 1 / sum : sum;
}