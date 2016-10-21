#include <stdio.h>

int main(void)
{
	float seconds=3.156e7;
	int year;
	float total;

	printf("input your age\n");
	scanf("%d",&year);

	total=seconds*year;
	printf("the total secods is %f or %e\n",total,total);
	return 0;
}