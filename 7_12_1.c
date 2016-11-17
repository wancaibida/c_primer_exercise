#include <stdio.h>

int main(void)
{
	int spaceCount;
	int newLineCount;
	int totalCount;
	char c;

	spaceCount=0;
	newLineCount=0;
	totalCount=0;

	while((c=getchar())!='#')
	{
		switch(c)
		{
			case ' ':
			spaceCount++;
			break;

			case '\n':
			newLineCount++;
			break;

			default:
			break;
		}

		totalCount++;
	}

	printf("space cound %d,newLineCount %d,totalCount %d\n",spaceCount,newLineCount,totalCount );
	return 0;
}