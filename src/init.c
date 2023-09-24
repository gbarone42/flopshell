#include "../inc/minishell.h"

// Inizializza la struttura della shell
int init_shell(t_shell *shell)
{
    char *user;

    shell->in = dup(STDIN_FILENO);
    shell->out = dup(STDOUT_FILENO);
    shell->pipe[0] = -1;
    shell->pipe[1] = -1;
    shell->status = 0;
    user = getenv("USER"); //NOTE : should add a check to ensure that user is not NULL before using it
    shell->prompt = ft_strjoin(user, "@Agshell"); //Ensure that ft_strjoin correctly allocates memory and returns a valid pointer (also, consider checking the return value of ft_strjoin for errors.)
    // Strjoin does the malloc
    free(user);
    //shell_env(env, shell);
    //should include a return statement at the end of the function.
}
