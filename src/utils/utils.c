#include "../../inc/minishell.h"

void    shell_exit(t_shell *shell)
{
    int	i;

    i = 0;
    rl_clear_history();
    free(shell->input);
    free(shell->prompt);// Free user input and prompt
    //
    while (shell->env[i])
    {
        free(shell->env[i]); // Cleanup environment variables
        i++;
    }
    free(shell->env);
    i = 0;
    if (shell->paths)
    {
        while (shell->paths[i])
        {
            free(shell->paths[i]);
            i++;
        }
        free(shell->paths);
    }

    ////da qua in poi non ci riguarda
    // i = 0;
    // if (shell->export)
    // {
    //     while (shell->export[i])
    //     {
    //         free(shell->export[i]);
    //         i++;
    //     }
    //     free(shell->export);
    // }
    // exit(g_exit);
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
