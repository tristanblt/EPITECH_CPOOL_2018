/*
** EPITECH PROJECT, 2018
** CPool_bistro_matic_2018
** File description:
** base_util
*/

#include "bistro_matic.h"

int is_number_base(char c, char *base)
{
    for (int i = 0; base[i] >= 21; i++) {
        if (c == base[i]) {
            return (1);
        }
    }
    return (0);
}

char *power_ten(char *nbase, int p)
{
    char *result = malloc(sizeof(char) * (my_getnbr(nbase) * p));

    if (result == NULL)
        exit(EXIT_FAIL);
    if (p == 0) {
        result[0] = '1';
        return (result);
    }
    my_strcpy(result, nbase);
    while (p > 1) {
        result = infin_mul(nbase, result);
        p--;
    }
    return (result);
}

char *find_base(char c, char *base)
{
    char *result = malloc(sizeof(char) * my_strlen(base));

    for (int i = 0; base[i]; i++)
        if (base[i] == c) {
            my_strcpy(result, my_nbr_char(i));
            return (result);
        }
    return ("-1");
}

void base_ten_to_x_neg(char **res, char **result, int is_neg)
{
    if (is_neg) {
        *res[0] = '-';
        (*res)++;
        (*result)++;
    }
}