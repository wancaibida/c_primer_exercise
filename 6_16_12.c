#include <stdio.h>
#define SIZE 8

int main(void)
{
	int arr[SIZE];
	int i,j;

	for(i=0,j=1;i<SIZE;i++,j*=2)
	{
		arr[i]=j;
	}

	i = 0;

	do
	{
		printf("%d\n", arr[i]);
	}
	while(++i<SIZE);

	return 0;
}
