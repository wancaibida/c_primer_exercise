#include <stdio.h>

float method(float a,float b);

int main(void)
{
	float a,b;

	while(scanf("%f %f",&a,&b)==2)
	{
		printf("(%f - %f)/(%f * %f) = %f \n",a,b,a,b,method(a,b) );
	}

	return 0;
}

float method(float a,float b)
{
	return (a-b)/(a*b);
}