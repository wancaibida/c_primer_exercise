#include <stdio.h>

#define MINUTE 60

int main(void)
{
	int total,hour,rest;

	printf("please enter total minute \n");
	scanf("%d",&total);

	while(total>0){
		hour = total / MINUTE;
		rest = total % MINUTE;
		printf("your entered is %d hour %d minute\n",hour,rest);
		printf("please enter total minute \n");
		scanf("%d",&total);
	}

	return 0;
}