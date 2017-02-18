#include <stdio.h>
#include <string.h>

void rep_new_line(char * str);
char * remove_blank(char * input);


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

        remove_blank(input);

        printf("Result is: \n");
        puts(input);
    }
    while (1);


    return 0;
}

char * remove_blank(char * input)
{
    char *ptr1, *ptr2;
    char new[50];
    ptr1 = input;
    ptr2 = new;

    while (*ptr1 != '\0')
    {
        if (*ptr1 == ' ')
        {
            ++ptr1;
        }
        else
        {
            *ptr2 = *ptr1;
            ++ptr1;
            ++ptr2;
        }
    }

    *ptr2 = '\0';

    ptr2 = new;
    ptr1 = input;
    while (*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ++ptr1;
        ++ptr2;
    }
    *ptr1 = '\0';

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