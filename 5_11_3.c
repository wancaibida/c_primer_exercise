#include <stdio.h>

int main(void)
{
	const int WEEK = 7;
	int total,week,day;

	printf("please total days\n");
	scanf("%d",&total);

	while(total>0)
	{
		printf("%d days is %d weeks %d days\n",total,total/WEEK,total%WEEK );
		printf("please total days\n");
		scanf("%d",&total);
	}

	return 0;
}