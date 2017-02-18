#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_WORD 50
#define MAX_LINE 10

void rep_new_line(char * str);
void show_menu();
char get_choice();

int read_line(char line[MAX_LINE][MAX_WORD]);
void display(char *ptr[], int len);
void display_sort(char *ptr[], int len);
void display_len(char *ptr[], int len);
void display_word_len(char *ptr[], int len);

int first_word_len(char * ptr);

int main(void)
{
    char c;
    char line[MAX_LINE][MAX_WORD];
    char *ptr[MAX_LINE];
    int len, i;
    
    for (i = 0; i < MAX_LINE; ++i)
    {
        ptr[i] = line[i];
    }
    
    printf("Please input %d lines,input EOF to stop. \n", MAX_LINE);
    len = read_line(line);
    
    do
    {
        show_menu();
        c = get_choice();
        switch (c)
        {
            case 'a':
                display(ptr, len);
                break;
            case 'b':
                display_sort(ptr, len);
                break;
            case 'c':
                display_len(ptr, len);
                break;
            case 'd':
                display_word_len(ptr, len);
                break;
            case 'q':
                return 0;
            default:
                puts("Please input a valid option like a b c d q");
                break;
        }
    }
    while (1);
    return 0;
}


void show_menu()
{
    printf("Please choose on option\n");
    printf("a)Display all the inputs               b)Display all the inputs by ascii\n");
    printf("c)Display all the inputs by length     d)Display all the inputs by first word length\n");
    printf("q)Quit\n");
}

char get_choice()
{
    char c;
    
    while ((c = getchar()))
    {
        c = tolower(c);
        if (strchr("abcdq", c) == NULL)
        {
            puts("Please input a valid choice ");
        }
        else
        {
            break;
        }
    }
    
    while (getchar() != '\n')
        ;
    
    return c;
}

int read_line(char line[MAX_LINE][MAX_WORD])
{
    int i = 0;
    
    while (fgets(line[i], MAX_WORD, stdin) != NULL && i < MAX_LINE)
    {
        if (line[i][0] == '\n')
        {
            break;
        }
        rep_new_line(line[i]);
        ++i;
    }
    return i;
}

void display(char *ptr[], int len)
{
    int i = 0;
    while (i < len)
    {
        puts(ptr[i]);
        ++i;
    }
}

void display_sort(char *ptr[], int len)
{
    char *temp;
    int top, seek;
    
    for (top = 0; top < len - 1; ++top)
    {
        for (seek = top + 1; seek < len; ++seek)
        {
            if (strcmp(ptr[top], ptr[seek]) > 0)
            {
                temp = ptr[top];
                ptr[top] = ptr[seek];
                ptr[seek] = temp;
            }
        }
    }
    display(ptr, len);
}

void display_len(char *ptr[], int len)
{
    char *temp;
    int top, seek;
    
    for (top = 0; top < len - 1; ++top)
    {
        for (seek = top + 1; seek < len; ++seek)
        {
            if (strlen(ptr[top]) > strlen(ptr[seek]))
            {
                temp = ptr[top];
                ptr[top] = ptr[seek];
                ptr[seek] = temp;
            }
        }
    }
    display(ptr, len);
}

void display_word_len(char *ptr[], int len)
{
    char *temp;
    int top, seek;
    
    for (top = 0; top < len - 1; ++top)
    {
        for (seek = top + 1; seek < len; ++seek)
        {
            if (first_word_len(ptr[top]) > first_word_len(ptr[seek]))
            {
                temp = ptr[top];
                ptr[top] = ptr[seek];
                ptr[seek] = temp;
            }
        }
    }
    display(ptr, len);
}

int first_word_len(char * ptr)
{
    char c;
    int len, flag;
    flag = 0;
    len = 0;
    
    while ((c = *ptr) != '\0')
    {
        switch (c)
        {
            case ' ':
            case '\n':
            case '\t':
                if (flag)
                {
                    return len;
                }
                ++ptr;
                continue;
                break;
            default:
                if (!flag)
                {
                    flag = 1;
                }
                
                ++ptr;
                ++len;
                break;
        }
    }
    
    return len;
}

void rep_new_line(char * str)
{
    size_t ln = strlen(str) - 1;
    if (*str && str[ln] == '\n')
    {
        str[ln] = '\0';
    }
}