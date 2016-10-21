#include <stdio.h>

int main(void)
{
	float unit = 2.54;
	float height;
	float inch;

	printf("input your ehight \n");
	scanf("%f",&height);

	inch=height/unit;
	printf("your height is %f cm equals %f inch\n",height,inch);
	return 0;
}