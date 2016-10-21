#include <stdio.h>

int main(void)
{
	char fname[40],lname[40];
	int lfname,llname;

	printf("please enter a your first name and last name\n");
	scanf("%s %s",fname,lname);

	lfname=strlen(fname);
	llname=strlen(lname);

	printf("%s %s\n",fname,lname);
	printf("%*d %*d\n",lfname,lfname,llname,llname);
	printf("%s %s\n",fname,lname);
	printf("%-*d %-*d\n",lfname,lfname,llname,llname);

	return 0;
}