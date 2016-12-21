#include <stdio.h>


void chbox(char, int, int);

int main(void)
{
	chbox('k', 11, 20);
	return 0;
}


void chbox(char c, int i, int j)
{
	int a, b;

	for (a = 0; a < j; a++)
	{
		for (b = 0; b < i; b++)
		{
			putchar(c);
		}

		putchar('\n');
	}
}