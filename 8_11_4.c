#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int wcount = 0;
	int ccount = 0;
	int iword = 0;
	char c ;

	while ((c = getchar()) != EOF)
	{
		if (isalpha(c))
		{
			++ccount;
			if (!iword)
			{
				iword = 1;
			}
		}
		else
		{
			if (iword)
			{
				iword = 0;
				++wcount;
			}
		}
	}

	printf("the total character is %d and the totla word is %d ,the average character is %f\n", ccount, wcount, ((float)ccount / wcount ));
	return 0;
}
