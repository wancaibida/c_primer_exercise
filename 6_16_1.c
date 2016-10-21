#include <stdio.h>

int main(void)
{
	char arr[26];
	int i;
	
	for(i=0;i<26;++i)
	{
		arr[i]='a'+i;
	}

	for(i=0;i<26;++i)
	{
		printf("%c\n", arr[i]);
	}

}