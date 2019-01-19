/*
** EPITECH PROJECT, 2018
** BISTRO
** File description:
** my_getnbr
*/

#include "bistro_matic.h"

int my_testnbr(char const *str, int pwr, int nbr, int *i)
{
    int nbr2 = 0;
    int j = 0;
    while (str[*i] >= '0' && str[*i] <= '9') {
        j = my_strlen(&str[*i]);
        pwr = j - 1;
        nbr = str[*i] - 48;
        while (pwr > 0) {
            nbr = nbr * 10;
            pwr--;
        }
        nbr2 = nbr2 + nbr;
        (*i)++;
    }
    return (nbr2);
}

int test_neg_get(char const *str, int *i)
{
    int neg = 1;
    while (str[*i] == '+' || str[*i] == '-') {
        if (str[*i] == '-') {
            neg = neg * -1;
        }
        (*i)++;
    }
    return (neg);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    int nbr = 0;
    int nbr2 = 0;
    int pwr = 0;

    neg = test_neg_get(str, &i);
    if (str[i] <= 48 || str[i] >= 57) {
        nbr2 = 0;
    }
    nbr2 = my_testnbr(str, pwr, nbr, &i);
    nbr2 = nbr2 * neg;
    return (nbr2);
}