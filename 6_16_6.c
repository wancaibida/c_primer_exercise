#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void)
{
	char words[SIZE];
	int i,end;

	for(i=0;i<SIZE, scanf("%c",&words[i]) , words[i]!='\n';i++)
	{
		;
	}

	end = strlen(words);

	for(i=end;i>=0;i--){
		printf("%c",words[i] );
	}


	return 0;
}