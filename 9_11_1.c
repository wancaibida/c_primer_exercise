#include <stdio.h>


double min(double, double);

int main(void)
{
	double a, b;

	a = 2.2;
	b = 4.2;

	printf("%lf and %lf the min is %lf\n", a, b, min(a, b) );
	return 0;
}


double min(double a, double b)
{
	return a > b ? b : a;
}