#include <stdio.h>

int main(void)
{
	int num;
	int i,j;
	int flag = 1;

	printf("please enter a number \n");
	scanf("%d",&num);

	for(int i = 1;i<=num;++i)
	{
		flag = 1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag = 0;
				break;
			}

		}

		if(flag)
		{
			printf("%d ", i);
		}
	}


	return 0;
}


