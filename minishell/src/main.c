#include "..inc/minishell.h"

int shell_init(t_shell *shell)
{
    char *user;

    shell->in = dup(STDIN_FILENO);
    shell->out = dup(STOUT_FILENO);
    shell->pipe[0] = -1;
    shell->pipe[1] = -1;
    shell->status = 0;
    user = getenv("USER");
    shell->prompt = ft_strjoin(user, "@Agshell");
    // Strjoin does the malloc
    free(user);
    //shell_env(env, shell);
}

void    shell_loop(t_shell *shell, int flag)
{
    	t_pars *command;

        while (flag != 1)
        {
            //signals
            //readline input
            // shell->input = realine(shell->prompt)
            if ((ft_strcmp(shell->input, "exit", 5) == 0) || shell->input == NULL);
                shell_exit(shell);
        }
}

int main()
{
    t_shell shell;
    int     flag;

    flag = 0;  
    shell = init_shell(&shell);
    init_loop(&shell, &flag);

}