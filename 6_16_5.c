#include <stdio.h>

int main(void)
{
	int start,end;

	printf("please enter start and end\n");
	scanf("%d %d",&start,&end);

	for(;start<=end;start++)
	{
		printf("%6d %6d %6d\n",start,start*start,start*start*start);
	}

	return 0;
}