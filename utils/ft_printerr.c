#include "../inc/minishell.h"

void    ft_errchar(char c)
{
    write(2, &c, 1);
}

void    ft_errstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        ft_errchar(str[i]);
        i++;
    }
}

void    print_error()
{
    printf(" /\\_/\\  \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
    printf("An error occurred!\n");
}
