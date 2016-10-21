#include <stdio.h>

#define RANGE 10

int main(void)
{
	int num,max;

	printf("please enter number\n");
	scanf("%d",&num);
	max = num+RANGE;
	while(num<=max)
	{
		printf("%d\n", num++);
	}
	return 0;
}