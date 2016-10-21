#include <stdio.h>

int main(void)
{
	int max;
	int sum,i;
	sum = 0;

	printf("Enter a number: \n");
	scanf("%d",&max);

	while(max > 0)
	{
		i = 0;
		sum = 0;
		while(i++<max)
		{
			sum+=i*i;
		}

		printf("total is %d\n", sum);
		printf("Enter a number: \n");
		scanf("%d",&max);
	}

	return 0;
}