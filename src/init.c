#include "../inc/minishell.h"

// Inizializza la struttura della shell
bool init_shell(t_shell *shell)
{
    char *user;

    shell->in = dup(STDIN_FILENO);
    shell->out = dup(STDOUT_FILENO);
    shell->pipe[0] = -1;
    shell->pipe[1] = -1;
    shell->status = 0;
    user = getenv("USER");
    if (!user) // added check on user
        return (false);
    shell->prompt = ft_strjoin(user, "@AGshell"); // Strjoin does the malloc
    free(user);
    if (!init_env(env, shell)) // returns false if initialization on enviroment is unsuccessful
        return (false);
    return (true); // return true if initialization is successful
}

void init_env(char **env, t_shell shell) //array of string of environment variable // and a pointer to a struct
{
    int i; 
    char **path_env;

    path_env = NULL;
    i = 0;
    while(env[i]) //counting the number of envirment variables until it reaches 'NULL'
        i++;
    shell->env(char **)malloc(sizeof(char *) * i + 1); //allocates memory for an array of strings
    i = -1;
    while(env[i])
        shell->env[i] = ft_strdup(env[i]); //for each non-null element create a copy of the environment variable stored in the shell->env array
    i = 0;
    path_env = ft_split(getenv("PATH"), ':'); //split the PATH environment variable into an array of strings based on the ':' delimiter
    while(path_env[i]) //it then counts the number of elements in the resulting array
        i++;
    shell->paths = (char **)malloc(sizeof(char *) * i + 1); //allocates memory for an array of strings
    i = -1;
    while(path_env[++i])
        shell->paths[i] = ft_strjoin(path_env[i], "/") //for each non-null element, it uses ft_strjoin to concatenate the element with a '/' character and stores the result in the shell->paths array
    i = 0;
    while (path_env[i]) {
        free(path_env[i]);
        i++;
    }
    // Free the path_env array itself
    free(path_env);
}