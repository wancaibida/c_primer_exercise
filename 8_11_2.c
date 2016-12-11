#include <stdio.h>

int main(void)
{
	char c;
	int count = 0;

	while ((c = getchar()) != EOF)
	{
		if (count > 10)
		{
			printf("\n");
			count = 0;
		}
		else
		{
			count++;
		}

		printf("%d ", c);

		if (c < ' ')
		{
			switch (c)
			{
			case '\n':
				printf("\\n");
				break;
			case '\t':
				printf("\\t");
				break;
			default:
				printf("^%c", c + 64);
				break;
			}
		}
		else {
			printf("%c", c);
		}

	}

	return 0;
}
