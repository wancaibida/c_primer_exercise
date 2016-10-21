#include <stdio.h>

#define SIZE 8

int main(void)
{
	int arr[SIZE];
	int i =0;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}


	for (i = SIZE; i >0; --i)
	{
		printf("%d ", arr[i-1]);
	}

	return 0;
}
