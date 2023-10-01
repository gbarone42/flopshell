#include "../inc/minishell.h"

// create global to handle exit_status
// int g_exit = FALSE;
// global not usable

void    signal_handler(int sig)
{
    //
}

void    shell_loop(t_shell *shell, int exit_flag)
{
    t_parser *command;

    while (exit_flag != TRUE)
    {
        //signals
        shell->input = readline(shell->prompt);
        if ((ft_strcmp(shell->input, "exit", 5) == 0) || shell->input == NULL)
            shell_exit(shell); // controllo per exit
        if (ft_isvalid(shell->input))
        {
            add_history(shell->input);
            shell_parser(shell, &command);
            if (exit_flag == FALSE)
                // shell_executor (&command, shell);
            // pars_free(command);
            // free(shell->input)
        }
    }
}

int main()
{
    t_shell shell;
    int     exit_flag;

    exit_flag = FALSE;
    // Welcome message to print
    shell = init_shell(&shell); // Initialize shell struct
    shell_loop(&shell, &exit_flag); // Initialize main loop
    return (0);
}