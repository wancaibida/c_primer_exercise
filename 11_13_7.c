#include <stdio.h>
#include <string.h>

void rep_new_line(char * str);
char * string_in(char * input , char * search);


int main(void)
{
    char input[50];
    char search[10];

    do {
        printf("Input your words\n");
        if (fgets(input, 50, stdin) == NULL)
        {
            return 0;
        }
        rep_new_line(input);

        printf("Input your search\n");
        if (fgets(search, 10, stdin) == NULL)
        {
            return 0;
        }
        rep_new_line(search);

        if (string_in(input, search) == NULL)
        {
            puts("Can not found");
        }
        else
        {
            puts("Yeah i found it ");
        }
    }
    while (1);


    return 0;
}

char * string_in(char * input , char * search)
{
    char *ptr1, *ptr2, *cursor;
    int len, i;
    ptr1 = input;
    ptr2 = search;
    len = strlen(search);

    while (*ptr1 != '\0')
    {
        cursor = ptr1;
        i = 0;
        while (*ptr1 == *ptr2 && *ptr1 != '\0' && *ptr2 != '\0')
        {
            ++ptr1;
            ++ptr2;
            ++i;
        }

        if (i == len)
        {
            return (ptr1 - i);
        }
        else
        {
            ptr1 = ++cursor;
            ptr2 = search;
        }
    }

    return NULL;
}

void rep_new_line(char * str)
{
    size_t ln = strlen(str) - 1;
    if (*str && str[ln] == '\n')
    {
        str[ln] = '\0';
    }
}