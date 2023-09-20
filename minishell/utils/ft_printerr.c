#include "../inc/minishell.h"

ft_errchar(char c)
{
    write(2, &c, 1);
}

ft_errstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        ft_errchar(str[i])
        i++;
    }
}