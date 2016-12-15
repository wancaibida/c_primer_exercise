#include <stdio.h>

char get_first(void);

int main(void)
{
	char c = get_first();
	printf("your choice is [%c]\n", c);
	return 0;
}

char get_first()
{
	int ch;


	do
	{
		ch = getchar();
	} while (ch == ' ' || ch == '\n');

	while (getchar() != '\n')
	{
		continue;
	}
	return ch;
}