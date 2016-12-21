#include <stdio.h>


int alpha(char c);

int main(void)
{
	char c;

	while ((c = getchar()) != EOF)
	{
		printf("%c index is %d\n", c, alpha(c));

		while (getchar() != '\n')
			continue;
	}
	return 0;
}

int alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 'a';
	}

	if (c >= 'A' && c <= 'Z')
	{
		return c - 'A';
	}

	return -1;
}


