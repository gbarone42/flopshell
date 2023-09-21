#include "..inc/minishell.h"

int shell_init(t_shell *shell)
{
    char *user;

    shell->in = dup(STDIN_FILENO);
    shell->out = dup(STDOUT_FILENO);
    shell->pipe[0] = -1;
    shell->pipe[1] = -1;
    shell->status = 0;
    user = getenv("USER"); //NOTE : should add a check to ensure that user is not NULL before using it
    shell->prompt = ft_strjoin(user, "@Agshell"); //Ensure that ft_strjoin correctly allocates memory and returns a valid pointer. 
    // Strjoin does the malloc
    free(user);
    //shell_env(env, shell);
    //should include a return statement at the end of the function.
}

void    shell_loop(t_shell *shell, int flag)
{
    	t_pars *command;

        while (flag != 1)
        {
            //signals
            //readline input
            // shell->input = realine(shell->prompt)
            if ((ft_strcmp(shell->input, "exit", 5) == 0) || shell->input == NULL)
                shell_exit(shell);
        }
}

int main()
{
    t_shell shell;
    int     flag;

    flag = 0;  
    shell = init_shell(&shell);//shell_init o init_shell? testa o croce?
    init_loop(&shell, &flag);// ⬆️

}