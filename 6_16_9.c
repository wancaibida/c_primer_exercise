#include <stdio.h>


int main(void)
{
	int start,end,temp,sum;

	printf("please enter start and end \n");

	while(scanf("%d %d",&start,&end) == 2 && start < end)
	{
		sum = 0;
		for(temp=start;temp<=end;temp++)
		{
			sum+= (temp*temp);
		}
		printf("The sum of squares from %d to %d is %d \n", start*start,end*end,sum);
		printf("enter next start and end \n");
	}

	return 0;
}
