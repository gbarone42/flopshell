#include "../../inc/minishell.h"

void lex_tokenizer(t_shell *shell, char *input, t_tok **token)
{
    t_lex *lex;
    int i;

    lex = (t_lex *)ft_calloc(1, sizeof(t_lex));
    lex->state = STATE_NORMAL;
    lex->type = -1;
    lex->len = 0;
    lex->shell = shell;
    i = 0;

    while (input[i] && lex->type != -2)
    {
        if (lex->state == STATE_NORMAL)
            state_normal(input[i], lex, token, id);
        else if (lex->state == STATE_DOUBLE_QUOTE || lex->state == STATE_SINGLE_QUOTE)
            state_quotes(input[i], lex);
        else if (lex->state == STATE_DOLLAR)
    }
}