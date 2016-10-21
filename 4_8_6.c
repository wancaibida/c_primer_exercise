#include <stdio.h>
#include <float.h>

int main(void)
{
	float a;
	double b;
	a=1.0/3.0;
	b=1.0/3.0;

	printf("FLT_DIG is %d\n", FLT_DIG);
	printf("DBL_DIG is %d\n", DBL_DIG);

	printf("%.4f\n",a);
	printf("%.4f\n",b);
	printf("\n");

	printf("%.12f\n",a);
	printf("%.12f\n",b);
	printf("\n");

	printf("%.16f\n",a);
	printf("%.16f\n",b);
	printf("\n");


	return 0;
}