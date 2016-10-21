#include <stdio.h>
#define SIZE 255

int main(void)
{
	char words[SIZE];
	char c;
	int i =0;

	while(scanf("%c",&c) && c!= '\n' && i<255)
	{
		words[i++] = c;
	}

	while(i>=0)
	{
		printf("%c", words[i--]);
	}

	return 0;
}
