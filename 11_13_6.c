#include <stdio.h>
#include <string.h>

void rep_new_line(char * str);
char * strncpy2(char * s1, const char * s2, size_t n);

int main(void)
{
    char line[50];
    char s2[100];
    int n;
    char c;
    
    
    do {
        puts("Enter your line");
        
        if (fgets(s2, 100, stdin) == NULL)
        {
            return 0;
        }
        
        puts("Enter the number you want put !");
        
        while (!scanf("%d", &n))
        {
            while ((c = getchar()) != '\n' && c != EOF)
            {
                continue;
            }
            printf("put an valid number\n");
        }
        
        strncpy2(line, s2, n);
        
        while ((c = getchar()) != '\n' && c != EOF)
        {
            continue;
        }
        printf("The result is %s\n", line);
        
    } while (1);
    
    return 0;
}

char * strncpy2(char * s1, const char * s2, size_t n)
{
    int i;
    char * ptr = s1;
    
    while (i < n && *s2 != '\0')
    {
        *ptr = *s2;
        ++ptr;
        ++s2;
        ++i;
    }
    
    if (i == n)
    {
        *(s1 + i) = '\0';
    }
    
    return s1;
}

void rep_new_line(char * str)
{
    size_t ln = strlen(str) - 1;
    if (*str && str[ln] == '\n')
    {
        str[ln] = '\0';
    }
}