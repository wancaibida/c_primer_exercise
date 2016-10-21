#include <stdio.h>

int main(void)
{
	int times,count;
	double sum0,sum1,temp;
	double cursor = 1;
	printf("enter total times\n");

	scanf("%d",&times);
	for(sum0=0,sum1=0,count=0;count<times;count++,cursor+=1)
	{
		temp = (1.0/ cursor);
		sum0+= temp;

		if(count%2)
		{
			sum1+=temp;
		}
		else
		{
			sum1-=temp;
		}
	}

	printf("result sum0 is %lf ,sum1 is %lf,total is %lf\n",sum0,sum1 ,sum0+sum1);
	return 0;
}
