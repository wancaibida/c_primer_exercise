#include <stdio.h>

int main(void)
{
	int cnt;
	char c;
	char prev;

	prev = 0;
	cnt =0;

	while((c=getchar())!='#')
	{
		if(prev=='e' && c =='i'){
			cnt++;
		}

		prev = c;
	}


	printf("total count %d \n", cnt);
	return 0;
}