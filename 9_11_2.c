#include <stdio.h>


void chline(char, int, int);

int main(void)
{
	chline('k', 11, 20);
	return 0;
}


void chline(char c, int i, int j)
{
	if (i > j)
	{
		printf("%d is smaller than %d\n", j, i);
		return;
	}
	int k, len;
	for (k = 0; k < i; k++)
	{
		putchar(' ');
	}

	len = j - i;
	for (k = 0; k < len; k++)
	{
		putchar(c);
	}
}