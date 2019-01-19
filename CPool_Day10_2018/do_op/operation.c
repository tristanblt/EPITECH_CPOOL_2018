/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** operation
*/

#include "my.h"

int add(int a, int b);
int sous(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int mod(int a, int b);

struct lope
{
    char c;
    int (*fct)(int, int);
};

char getope(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            return (str[i]);
        if (str[i] == '%')
            return (str[i]);
        i++;
    }
    return (0);
}

void next_op(struct lope opes[6], char sign, int ns[2])
{
    int i = 0;

    while (opes[i].c != 0) {
        if (sign == opes[i].c)
            opes[i].fct(ns[0], ns[1]);
        i++;
    }
}

int main(int ac, char **av)
{
    int ns[2];
    char sign = 0;
    struct lope opes[6] = {{'+', add}, {'-', sous}, {'*', mult}, {'/', div}};

    opes[4].c = '%';
    opes[4].fct = mod;
    if (ac < 4)
        return (84);
    ns[0] = my_getnbr(av[1]);
    sign = getope(av[2]);
    ns[1] = my_getnbr(av[3]);
    if ((av[1][0] < '0' || av[1][0] > '9') && av[1][0] != '-')
        ns[0] = 0;
    if ((av[3][0] < '0' || av[3][0] > '9') && av[3][0] != '-')
        ns[1] = 0;
    if (sign == 0) {
        my_putchar('0');
        return (84);
    }
    next_op(opes, sign, ns);
    return (0);
}