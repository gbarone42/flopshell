#include "../../inc/minishell.h"

int pipe_counter(const char *str, char pipe)
{
    size_t i;
    size_t len;
    size_t n;
    char quote;

    i = 0;
    len = 0;
    n = 0; // Counter for the number of pipes found
    while (42)
    {
        if (str[i] == pipe || str[i] == '\0')
        {
            if (len > 0)
                n++;
            len = 0;
        }
        if (str[i] == pipe && n == 0)
            return -1;
        else if (str[i] == DOUBLE_QUOTES || str[i] == SINGLE_QUOTES)
        {
            quote = str[i];
            i++;
            while (str[i] && str[i] != quote) // Iterates till finding the quotes closure
                i++;
            if (str[i] == '\0')
                break ;
        }
        else
            len++;
        i++;
    }
    return (n);
}