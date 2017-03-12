#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 20
#define MAX_WORD 10

char* read_line(char line[], int len);
int read_word(char * line, int x, int y, char arr[x][y]);

int main(void)
{
	char line[MAX_LEN];
	char words[5][10];
	int read, i;

	read_line(line, MAX_LEN);
	read = read_word(line, 5, 10, words );

	for (i = read; i > -1; --i)
	{
		printf("%s ", words[i]);
	}

	return 0;
}

int read_word(char * line, int x, int y, char arr[x][y])
{
	int i, w;
	size_t j;
	char *ptr;
	size_t len = strlen(line);
	w = 0;

	for (i = 0; i < len; )
	{
		ptr = line + i;
		j = 0;

		if (*ptr == '\0')
		{
			return w;
		}

		while (isalpha(*ptr))
		{
			++ptr;
			++j;
		}

		if (j)
		{
			if (w < y)
			{
				strncpy(arr[w], line + i, j);
				arr[w][j] = '\0';
				++w;
				i += j;
			}
			else
			{
				return w;
			}
		}
		else
		{
			++i;
		}
	}

	return w;
}

char* read_line(char line[], int len)
{
	fgets(line, len, stdin);

	size_t ln = strlen(line) - 1;
	if (*line && line[ln] == '\n')
	{
		line[ln] = '\0';
	}

	return line;
}