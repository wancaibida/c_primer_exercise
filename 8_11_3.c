#include <stdio.h>
#include <ctype.h>


int main(void)
{
	char c;
	int ucount = 0;
	int lcount = 0;

	while ((c = getchar()) != EOF)
	{
		if (isupper(c))
		{
			ucount++;
		}
		else if (islower(c))
		{
			lcount++;
		}
	}

	printf("upper count %d ,lower count %d \n", ucount, lcount);
	return 0;
}
