#include <stdio.h>

void read(char * ptr, int n);

int main(void)
{
	char c[10];
	int i;
	read(c, 5);

	for (i = 0; i < 5; i++)
	{
		putchar(c[i]);
	}
	return 0;
}

void read(char * ptr, int n)
{
	char c;

	while ((c = getchar()) != EOF && n--)
	{
		*ptr = c;
		ptr++;
	}
}
