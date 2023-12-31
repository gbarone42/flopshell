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
# define TRUE 1
# define FALSE 0
//////////////////////////////////////
// Structure for the main shell
typedef struct s_shell
{
    char *prompt; // Info all'inizio della riga di comando
    char *input;
    char **env;
    char **paths;
    int pipe[2]; // Array for the FD of the pipe input and output files
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
    int state; // State tracker for tokenization purposes
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
    bool    exec;
    struct s_parser *next;
    struct s_parser *prev;
}   t_parser;
//////////////////////////////////////
// Macros

#define DOUBLE_QUOTES = '\"';
#define SINGLE_QUOTES = '\'';

/////////////////////////////////////
// States
// il enum inizia da 0 di default
enum    e_states
{
    STATE_NORMAL,
    STATE_DOUBLE_QUOTE,
    STATE_SINGLE_QUOTE,
    STATE_DOLLAR_SIGN,
    STATE_DOLLAR_QUOTES,
    STATE_REDIRECT,
};
//////////////////////////////////////
// Initialization
bool    init_shell(t_shell *shell);
bool    init_env(char **env, t_shell *shell)
// Parser
#endif
