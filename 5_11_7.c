#include <stdio.h>

float cube(float f);


int main(void)
{
	float f;

	printf("Enter a float: \n");
	scanf("%f",&f);

	while(f > 0)
	{
		printf("cube is %f\n",cube(f));
		printf("Enter a float: \n");
		scanf("%f",&f);
	}

	return 0;
}


float cube(float f)
{
	return f*f*f;
}