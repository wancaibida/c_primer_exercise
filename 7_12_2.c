#include <stdio.h>

int main(void)
{
	int cnt;
	char c;

	cnt=0;

	while((c=getchar())!='#')
	{
		printf("%4c%4d", c,c);
		cnt++;

		if(cnt%8==0){
			printf("\n");
		}
	}
	return 0;
}