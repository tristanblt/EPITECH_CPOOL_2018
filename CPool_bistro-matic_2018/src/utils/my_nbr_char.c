/*
** EPITECH PROJECT, 2018
** Visual Studio Live Share (Workspace)
** File description:
** my_nbr_char
*/

#include "bistro_matic.h"

int my_int_len(int nb)
{
    int i = 0;

    while (nb != 0) {
        nb /= 10;
        i++;
    }
    return (i);
}

char *my_nbr_char(int nbr)
{
    int ret = 0;
    int len = 0;
    int n = nbr;
    char *res = malloc(sizeof(char) * (my_int_len(nbr) + 1));

    if (nbr == 0) {
        res[0] = '0';
        return (res);
    }
    while (n != 0) {
        len++;
        n /= 10;
    }
    for (int i = 0; i < len; i++) {
        ret = nbr % 10;
        nbr /= 10;
        res[len - (i + 1)] = ret + '0';
    }
    my_revstr(res);
    clean_str(&res);
    return (my_revstr(res));
}