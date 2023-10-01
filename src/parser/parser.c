#include "../../inc/minishell.h"

// next-step : build parser
void shell_parser(t_shell *shell, t_parser **command)
{
    t_token *token;
    static int n;
    int i;
    char **inputs; // Creo un array di stringhe per contenere gli input dopo lo split

    *command = NULL;
    token = NULL;
    n = 0;
    i = 0;
    inputs = input_split(shell); // Splitto l'input preparando i pezzi alla tokenizzazione
    if (!inputs)
        return ;
    while (inputs[i])
    {
        lex_tokenizer(shell, inputs[i], &token, &n);
        if (!token)
        {
            g_exit = 2;
            shell->exit = g_exit;
            if (i > 0)
                ft_errstr("syntax error, unexpecteed token before: \"|\"\n") // Stampa in STDERR
            i++;
            continue ; // Salta i comandi successivi e torna all'inizio del loop
        }
        // pars_lstadd_back(command, pars_lst_new(i + 1));
        // pars_commander(token, pars_lstlast);
        // tok_free(token);
        token = NULL;
        i++;
    }
    // tok_free(token);
    // lex_free_inputs(inputs);
}
