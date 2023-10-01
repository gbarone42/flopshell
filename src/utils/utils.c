#include "../../inc/minishell.h"

void    shell_exit(t_shell *shell)
{
    //
}

bool    ft_isvalid(char *str)
{
    int i;

    i = 0;
    if (ft_strlen(str) < 1 || ft_strlen(str) > INPUT_SIZE)
        return(true);
    else
    {
        // pay attenction to extended ascii
        if (str[i] < 32 && str[i] == 127)
            return (false);
        i++;
    }
    return (true);
}

void	tok_lstadd(t_tok **token, t_lex *lexer, int *id) //responsible for adding a new token to the end of a linked list of tokens //It takes as input a pointer to a pointer to the head of the token list (t_tok **token), a pointer to a lexer structure (t_lex *lexer), and a pointer to an integer identifier (int *id).
{
	tok_lstadd_back(token, tok_lstnew(lexer, id)); //calls the tok_lstnew function to allocate memory for a new token and initialize its fields based on the provided lexer and identifier.
}