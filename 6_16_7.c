#include <stdio.h>

int main(void)
{
	float a,b;

	while(scanf("%f %f",&a,&b)==2)
	{
		printf("(%f - %f)/(%f * %f) = %f \n",a,b,a,b,(a-b)/(a*b) );
	}

	return 0;
}