#include <stdio.h>

int main(void)
{
	char fname[40];
	char lname[40];

	printf("please enter your first name and lastname\n");
	scanf("%s %s",fname,lname);
	printf("hello %s \"%s\"\n",fname,lname);
	printf("hello %s \"%20s\"\n",fname,lname);
	printf("hello %s \"%-20s\"\n",fname,lname);

	printf("hello %s \"%*s\"\n",fname,strlen(lname)+3,lname);

	return 0;
}