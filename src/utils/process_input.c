#include "../../inc/minishell.h"

char **input_split(t_shell *shell, int exit_flag) // Outputs the arguments ready for tokenization
{
    int pipes;
    char **inputs;
    pipes = pipe_numstr(shell->input, '|');
    if (pipe == -1)
    {
        ft_errstr("syntax error, unexpecteed token before: \"|\"\n"); // Stampa in STDERR
        exit_flag = TRUE;
        shell->exit = exit_flag;
        return (NULL);
    }
    if (pipes > 1)
        inputs = pipe_split(shell->input, '|');
    else
    {
        inputs = (char **)ft_calloc(2, sizeof(char *));
        inputs[0] = ft_strdup(shell->inputs);
        inputs[1] = NULL;
    }
    return (inputs);   
}