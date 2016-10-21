#include <stdio.h>
#define SIZE 8

int main(void)
{
	double arr0[SIZE];
	double arr1[SIZE];
	int i;
	double sum;


	for(i=0,sum=0;i<SIZE;++i)
	{
		scanf("%lf",&arr0[i]);
		sum+=arr0[i];
		arr1[i]=sum;
	}

	i = 0;

	for(i=0;i<SIZE;++i)
	{
		printf("%5.2f ", arr0[i]);
	}

	printf("\n");
	for(i=0;i<SIZE;++i)
	{
		printf("%5.2f ", arr1[i]);
	}
	return 0;
}
