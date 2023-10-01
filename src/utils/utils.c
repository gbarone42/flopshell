#include "../../inc/minishell.h"

void    shell_exit(t_shell *shell)
{
    //
}

bool    ft_isvalid(char *str)
{
    int i;

    i = 0;
    if (ft_strlen(str) < 1 || ft_strlen(str) > INPUT_SIZE)
        return(false);
    else
    {
        // pay attenction to extended ascii
        if ((str[i] < 32 && str[i] != 127) || str[i] >= 128)
            return (false);
        i++;
    }
    return (true);//the string is valide
}
