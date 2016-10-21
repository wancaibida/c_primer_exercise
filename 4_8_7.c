#include <stdio.h>
#include <float.h>

#define GA 3.785

int main(void)
{
	const float INCH = 1.609;

	float gtotal,ltotal;

	printf("please enter your length inch\n");
	scanf("%f",&ltotal);

	printf("please enter your oil cost\n");
	scanf("%f",&gtotal);

	printf("1 gallo runs %.1f inchs\n",ltotal/gtotal);

	printf("100 km cost %.1f shen oil\n",(gtotal*GA)/(ltotal*INCH)*100);

	return 0;
}