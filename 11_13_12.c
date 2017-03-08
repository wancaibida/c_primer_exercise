#include <stdio.h>
#include <string.h>
#define MAX_LEN 20
#define MAX_WORD 5

char* read_line(char line[], int len);

int main(void)
{
	char line[MAX_LEN];
	char * words[5];

	read_line(line, MAX_LEN);
	puts(line);

	return 0;
}

char* read_line(char line[], int len)
{
	int i = 0;

	fgets(line, len, stdin);

	size_t ln = strlen(line) - 1;
	if (*line && line[ln] == '\n')
	{
		line[ln] = '\0';
	}

	return line;
}