#include <stdio.h>

int main(void)
{
	int i,k;
	char j;

	for(i=0;i<6;++i)
	{
		for(j='F',k=0;k<=i;k++,j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}

	return 0;
}