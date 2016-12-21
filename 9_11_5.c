#include <stdio.h>


void larger_of(double *, double *);

int main(void)
{
	double a, b;
	a = 2.0;
	b = 4.0;

	printf("original a is %lf ,b is %lf\n", a, b );

	larger_of(&a, &b);

	printf("currently a is %lf ,b is %lf\n", a, b );
	return 0;
}

void larger_of(double * a, double * b)
{
	double lg;
	lg = *a > *b ? *a : *b;
	*a = *b = lg;
}


