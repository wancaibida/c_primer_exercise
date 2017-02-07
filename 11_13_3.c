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
	int j, flag;
	flag = 0;
	j = 0;

	while ((c = getchar()) != EOF && j < n)
	{
		switch (c)
		{
		case ' ':
		case '\n':
		case '\t':
			if (flag)
			{
				return j;
			}
			continue;
			break;
		default:
			if (!flag)
			{
				flag = 1;
			}

			*ptr = c;
			ptr++;
			j++;
			break;
		}
	}

	return j;
}
