#include "..inc/minishell.h"

int main()
{
    int flag;
    flag = 0;
    
    shell = init_shell(&shell);
    init_loop(&shell, &flag);

}