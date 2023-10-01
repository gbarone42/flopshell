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

void init_env(char **env, t_shell *shell)
{
    int i; 
    char **path_env;

    i = 0;
    while (env[i])
        i++;
    shell->env = (char **)malloc(sizeof(char *) * i + 1);
    i = -1;
    while(env[i])
        shell->env[i] = ft_strdup(env[i]);
    i = 0;
    path_env = ft_split(getenv("PATH"), ':');
    while(path_env[i])
        i++;
    shell->paths = (char **)malloc(sizeof(char *) * i + 1);
    i = -1;
    while(path_env[++i])
        shell->paths[i] = ft_strjoin(path_env[i], "/");
    i = 0;
    while(path_env[i]);
        free(path_env[i]);
}