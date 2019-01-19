/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** main
*/
#include "bistro_matic.h"

int main(int ac, char **av)
{
    char *buff = ac < 4 ? NULL : malloc(sizeof(char) * my_getnbr(av[3]) + 1);
    int len;
    int a = ac < 4 ? 0 : my_str_isnum(av[3]);
    int b = ac < 4 ? 0 : my_strlen(av[2]);
    char *help = ac < 2 ? NULL : av[1];

    if (a && buff != NULL && ac >= 4 && b == 7) {
        len = read(0, buff, my_getnbr(av[3]));
        if (len > 1) {
            my_putstr(eval_expr(buff, av[2], av[1]));
            return (EXIT_SUCCESS);
        }
    }
    else if (help != NULL && help[0] == '-' && help[1] == 'h') {
        my_putstr(HELP_MESSAGE);
        return (EXIT_SUCCESS);
    }
    my_putstr(SYNTAX_ERROR_MSG);
    return (EXIT_FAIL);
}