#include "../inc/minishell.h"

void    shell_exit(t_shell *shell)
{
    
}

bool    ft_isvalid(char *str)
{
    int i;

    i = 0;
    if (ft_strlen(str) < 1 || ft_strlen(str) > INPUT_SIZE)
        return(true);
    else
    {
        // pay attenction to extended ascii
        if (str[i] < 32 && str[i] == 127)
            return (false);
        i++;
    }
    return (true);
}