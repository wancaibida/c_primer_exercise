#include <stdio.h>
#define FOOT 30.48f
#define INCHE 2.54f

int main(void)
{
	float height;
	int feet;
	float inches;
	printf("Enter a height in centimeters: \n");
	scanf("%f",&height);

	while(height>0)
	{
		feet = (int)(height / FOOT);
		inches = (height - feet * FOOT) / INCHE;
		printf("%f cm = %d feet %.1f inches \n",height,feet,inches);
		printf("Enter a height in centimeters(<=0 to quit): \n");
		scanf("%f",&height);
	}

	printf("bye\n");
	return 0;
}