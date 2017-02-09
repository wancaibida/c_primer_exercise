#include <stdio.h>
#include <string.h>

char * strchr2(char * target, char * interest);

void rep_new_line(char * str);

int main(void)
{
	char target[100];
	char interest[10];
	char *ptr;

	do
	{
		fgets(target, 100, stdin);
		fgets(interest, 10, stdin);

		rep_new_line(target);
		rep_new_line(interest);

		puts(target);
		puts(interest);
		ptr = strchr2(target, interest);
		printf("Result ptr is %s \nPlease continue\n", ptr);

	}
	while (*target != '\0');

	return 0;
}

char * strchr2(char * target, char * interest)
{
	char * ptr;
	unsigned long j = 1;
	unsigned long len = strlen(interest);

	ptr = "";

	while (*target != '\0')
	{
		if (*target == *interest)
		{
			ptr = target;
			while (*(++interest) != '\0' && *(++target) == *interest)
			{
				++j;
			}

			if (j == len)
			{
				return ptr;
			}
			else
			{
				target = ptr + 1;
				ptr = "";
			}
		}
		else
		{
			++target;
		}
	}

	return ptr;
}

void rep_new_line(char * str)
{
	size_t ln = strlen(str) - 1;
	if (*str && str[ln] == '\n')
	{
		str[ln] = '\0';
	}
}
