#include <stdio.h>

int main(void)
{
	int rcnt;
	char c;

	rcnt =0;

	while((c=getchar())!='#')
	{
		if(c=='.')
		{
			printf("!");
			rcnt++;
		}
		else if (c == '!')
		{
			printf("!!");
			rcnt++;
		}
		else
		{
			printf("%c", c);
		}
	}


	printf("total replace count %d \n", rcnt);
	return 0;
}