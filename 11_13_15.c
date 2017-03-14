#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1024

void show_original(char *ptr);
void show_upper(char *ptr);
void show_lower(char *ptr);

int main(int argc, char *arg[])
{
	char str[MAX_LEN];
	int method;

	if (argc < 2)
	{
		return -1;
	}

	if (strcmp(arg[1], "-p") == 0)
	{
		method = 0;
	}
	else if (strcmp(arg[1], "-u") == 0)
	{
		method = 1 ;
	}
	else if (strcmp(arg[1], "-l") == 0)
	{
		method = 2;
	}
	else
	{
		printf("Invalid option \n");
		return -1;
	}

	printf("Please enter you line \n");

	if (fgets(str, MAX_LEN, stdin) == NULL)
	{
		return - 1;
	}

	switch (method)
	{
	case 0:
		show_original(str);
		break;
	case 1:
		show_upper(str);
		break;
	case 2:
		show_lower(str);
		break;
	default:
		break;
	}


	return 0;
}

void show_original(char *ptr)
{
	puts(ptr);
}

void show_upper(char *ptr)
{
	while (*ptr != '\0')
	{
		putchar(toupper(*ptr));
		++ptr;
	}
	printf("\n");
}

void show_lower(char *ptr)
{
	while (*ptr != '\0')
	{
		putchar(tolower(*ptr));
		++ptr;
	}
	printf("\n");
}

