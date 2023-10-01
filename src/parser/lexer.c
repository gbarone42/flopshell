#include "../../inc/minishell.h"

void lex_tokenizer(t_shell *shell, char *input, t_token **token, int *id)
{
    t_lexer *lex;
    int i;

    lex = (t_lexer *)malloc(sizeof(t_lexer));
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
        else if (lex->state == STATE_DOLLAR_SIGN)
            state_dollar(input[i], lex, token, id);
        else if (lex->state == STATE_DOLLAR_QUOTES)
            state_dollarquotes(input[i], lex, token, id);
        else if (lex->state == STATE_REDIRECT)
            state_redirect(input[i], lex, token, id);
        i++;
    }
    // lex_tokenizer_end(lex, token, id);
}

void state_normal(char c, t_lexer *lex, t_token **token, int *id)
{
    if (c == 32)
        state_normale_space(lex,token,id);
    else if (c == DOUBLE_QUOTES)
        lex->state = STATE_DOUBLE_QUOTE;
    else if (c == SINGLE_QUOTES)
        lex->state = STATE_SINGLE_QUOTE;
    else if (c == '$')
        state_normal_dollar(lex);
    else if (c == '>' || c == '<')
    {
        if (lex->len > 0)
        {
            lex->buffer[lex->len] = '\0';
            tok_lstadd(token, lex, id);
            lex->len = 0;
        }
        lex_append(c, lex);
        lex->state = STATE_REDIRECT;
    }
    else
        lex_append(c, lex);
}