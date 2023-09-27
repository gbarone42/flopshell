#include "../../inc/minishell.h"

// next-step : build parser


void shell_parser(t_shell *shell, t_pars **command)
{
    t_token *token;
    static int n;
    int i;
    char **inputs;

    *command = NULL;
    token = NULL;
    n = 0;
    i = 0;
    inputs = input_split(shell);
}
