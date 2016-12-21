#include <stdio.h>


void fib(int num);

int main(void)
{
	fib(20);
	return 0;
}


void fib(int num)
{
	int i, j, temp;
	i = j = 1;

	printf("%d %d", i, j);

	while (j <= num)
	{
		temp = j;
		i = i + j;
		j = i + j;

		printf(" %d %d", i, j);

	}
}



