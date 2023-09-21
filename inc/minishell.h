#ifndef MINISHELL_H
# define MINISHELL_H

# include <readline/readline.h>
# include <readline/history.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <fcntl.h>
// Include for pid_t
# include <sys/types.h>
# include <sys/time.h>
# include <sys/wait.h>
//# include "libft.h"
# include "../libft/inc/libft.h"
//////////////////////////////////////
// Macros
# define INPUT_SIZE 4242
# define TRUE 0
# define FALSE 1
//////////////////////////////////////
// Structure for the main shell
typedef struct s_shell
{
    char *prompt;
    char *input;
    char **env;
    char **paths;
    int pipe[2];
    int in;
    int out;
    int status;
    pid_t pid;
    int exit;
    bool history;
}   t_shell;
// Struttura per il lexer
typedef struct s_lexer
{
    int state;
    int type;
    int start;
    size_t len;
    char buffer[INPUT_SIZE];
    t_shell *shell;
}   t_lexer;
// Lista concatenata di token
typedef struct s_token
{
    int id;
    int type;
    char *token;
    struct s_token *next;
    struct s_token *prev;
}   t_token;
// Lista concatenata di parser(?)
typedef struct s_parser
{
    int id;
    char **cdms;
    int in;
    int out;
    int numred;
    int *redirs;
    char **redir_name;
    bool_exec;
    struct s_parser *next;
    struct s_parser *prev;
}   t_parser;
//////////////////////////////////////

#endif
