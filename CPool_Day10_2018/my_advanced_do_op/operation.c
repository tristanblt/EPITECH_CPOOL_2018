/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** operation
*/

#include "my.h"
#include "struct_op.h"
#include "my_opp.h"


int my_usage(int a, int b)
{
    my_putstr("error: only [ + - / * % ] are supported\n");
    return (0);
}

;void next_op(const struct operator OPERATORS_FUNCS[], char *sign, int ns[2])
{
    int i = 0;

    while (i < 5) {
        if (!my_strcmp(sign, OPERATORS_FUNCS[i].str))
            OPERATORS_FUNCS[i].fct(ns[0], ns[1]);
        i++;
    }
}

int main(int ac, char **av)
{
    int ns[2];
    char *sign = 0;

    if (ac < 4)
        return (84);
    ns[0] = my_getnbr(av[1]);
    sign = av[2];
    ns[1] = my_getnbr(av[3]);
    if ((av[1][0] < '0' || av[1][0] > '9') && av[1][0] != '-')
        ns[0] = 0;
    if ((av[3][0] < '0' || av[3][0] > '9') && av[3][0] != '-')
        ns[1] = 0;
    if (sign == 0) {
        my_putchar('0');
        return (84);
    }
    next_op(OPERATORS_FUNCS, sign, ns);
    return (0);
}