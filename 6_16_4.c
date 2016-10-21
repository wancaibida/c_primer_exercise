#include <stdio.h>

int main(void)
{
	char userInput,endChar,currentChar;
	int whiteCount,maxRows,currentRow;
	printf("please input a character\n");
	scanf("%c",&userInput);
	maxRows = userInput-'A';

	for(currentRow = 0;currentRow < maxRows;currentRow++)
	{
		endChar = currentRow+'A';
		whiteCount = maxRows-currentRow;

		while(whiteCount--)
		{
			printf(" ");
		}

		for(currentChar='A';currentChar<endChar;currentChar++)
		{
			printf("%c", currentChar);
		}

		for(;currentChar>='A';currentChar--)
		{
			printf("%c", currentChar);
		}

		printf("\n");

	}

	return 0;
}