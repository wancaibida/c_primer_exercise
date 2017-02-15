#include <stdio.h>
#include <string.h>

void rep_new_line(char * str);
int is_within(char * target, char c);

int main(void)
{
	char line[50];
	char c;

	do
	{
		printf("Input your words\n");
		if (fgets(line, 50, stdin) == NULL)
		{
			break;
		}
		rep_new_line(line);
		printf("Input your search\n");
		c = getchar();
		printf("Result is %d\n", is_within(line, c));
		while ((c = getchar()) != '\n' && c != EOF)
		{
			continue;
		}
	}
	while (c != EOF);


	return 0;
}

int is_within(char * target, char c)
{
	while (*target != '\0')
	{
		if (*target == c)
		{
			return 1;
		}
		++target;
	}

	return 0;
}

void rep_new_line(char * str)
{
	size_t ln = strlen(str) - 1;
	if (*str && str[ln] == '\n')
	{
		str[ln] = '\0';
	}
}
