#include <stdio.h>


double avg(double, double);

int main(void)
{
	double a, b;
	a = 2.0;
	b = 4.0;
	printf("%lf and %lf avg is %lf\n", a, b, avg(a, b) );
	return 0;
}

double avg(double a, double b)
{
	return 1 / ((1 / a + 1 / b) / 2);
}


