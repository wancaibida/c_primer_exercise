#include <stdio.h>

int main(void)
{
	int c = 0;

	while (getchar() != EOF)
	{
		c++;
	}

	printf("The total number is %d\n", c);
	return 0;
}
