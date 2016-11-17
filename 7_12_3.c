#include <stdio.h>

int main(void)
{
	int ecount,ocount,esum,osum;
	int num;
	ecount=ocount=esum=osum=0;

	while(scanf("%d",&num)&&num!=0)
	{
		if(num%2)
		{
			osum+=num;
			ocount++;
		}
		else
		{
			esum+=num;
			ecount++;
		}
	}

	printf("even count is %d and avg is %f,odd count is %d and odd avg is %f\n",ecount,((float)esum)/ecount,ocount,((float)osum)/ocount );
	return 0;
}