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
    int     init_status;

    exit_flag = FALSE;
    
    init_status = init_shell(&shell);  // Initialize shell struct with error checking
    if (init_status != SUCCESS)  // Assuming SUCCESS is a defined macro for successful initialization
    {
        printf(stderr, "Failed to initialize the shell.\n");
        return init_status;  // Return initialization error code
    }
    
    // Welcome message - it’s better to include it in a separate function for cleaner code
    print_welcome_message();

    shell_loop(&shell, &exit_flag);  // Initialize main loop

    // Consider returning the exit status of the shell or last command executed
    return shell.exit_status; 
}


void print_welcome_message()
{
    printf("Welcome to the shell!\n");
    // More detailed welcome message or instructions can be added here
}