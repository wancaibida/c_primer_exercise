#include <stdio.h>
#include <string.h>

void rep_new_line(char * str);
char * reverse(char * input);


int main(void)
{
    char input[50];

    do {
        printf("Input your words\n");
        if (fgets(input, 50, stdin) == NULL)
        {
            return 0;
        }
        rep_new_line(input);

        reverse(input);

        printf("Result is: \n");
        puts(input);
    }
    while (1);


    return 0;
}

char * reverse(char * input)
{
    char *ptr;
    char a, b;
    int len, mid, j;
    ptr = input;
    len = (int)strlen(input);
    mid = len / 2;
    j = 0;

    while (j <= mid)
    {
        a = *(ptr + j);
        b = *(ptr + len - j - 1);

        *(ptr + j) = b;
        *(ptr + len - j - 1) = a;
        ++j;
    }
    return input;
}

void rep_new_line(char * str)
{
    size_t ln = strlen(str) - 1;
    if (*str && str[ln] == '\n')
    {
        str[ln] = '\0';
    }
}