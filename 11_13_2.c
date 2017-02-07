#include <stdio.h>

int read(char * ptr, int n);

int main(void)
{
	char c[10];
	int i, j;
	j = read(c, 5);

	for (i = 0; i < j; i++)
	{
		putchar(c[i]);
	}
	return 0;
}

int read(char * ptr, int n)
{
	char c;
	int j;

	j = 0;

	while ((c = getchar()) != EOF && c != '\t' && c != '\n' && c != ' ' && n--)
	{
		*ptr = c;
		ptr++;
		j++;
	}

	return j;
}
