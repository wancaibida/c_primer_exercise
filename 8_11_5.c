#include <stdio.h>
#include <ctype.h>

#define START 0
#define END 100

int calcu(int min, int max);

int main(void)
{
	int start, end;

	start = calcu(START, END);
	end = END;

	char c;

	printf("I guess your number is %d \n", start);

	while ((c = getchar()) != 'y')
	{
		switch (c)
		{
		case 'b':
			start = calcu(start, end);
			break;
		case 's':
			end = start;
			start = calcu(START, end);
			break;
		default:
			printf("please ender yes(y),big(b),small(s)\n");
			break;
		}
		printf("I guess your number is %d \n", start);

		while (getchar() != '\n')
			;
	}

	printf("cool\n");

}

int calcu(int min, int max)
{
	return (min + max) / 2;
}