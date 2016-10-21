#include <stdio.h>

int main(void)
{
	char name[40];
	float a;
	printf("please enter a your name\n");
	scanf("%s",name);

	printf("please enter your height(cm)\n");
	scanf("%f",&a);
	printf("%s , your are %.3f m tall", name,a/100);

	return 0;
}