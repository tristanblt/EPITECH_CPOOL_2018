/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_getnbr_base
*/

#include "my_strlen2.c"

void my_putchar(char c);
char *my_revstr(char *str);

int my_compute_power_rec2(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    else if (p > 0) {
        return (my_compute_power_rec2(nb, p - 1) * nb);
    }
    else {
        return (1);
    }
}

int find_n_base(char const *base, char c)
{
    int i = 0;

    while (i < my_strlen2(base)) {
        if (base[i] == c) {
            return (i);
        }
        i++;
    }
    return (-1);
}

int calc_charge(char const *str, int *i)
{
    int charge = 1;

    while (str[*i] <= '0' || str[*i] >= '9') {
        if (str[*i] == '-') {
            charge*=-1;
        }
        (*i)++;
    }
    return (charge);
}

int my_getnbr_base(char const *str, char const *base)
{
    int nbase = my_strlen2(base);
    int res = 0;
    int ip = 0;
    int *i = &ip;
    int p = my_strlen2(str) - 1;
    int to_nbr = 0;
    int charge;

    charge = calc_charge(str, i);
    to_nbr = *i;
    p = p - to_nbr;
    while (*i < my_strlen2(str)) {
        if (find_n_base(base, str[*i]) == -1)
            return (0);
        res += find_n_base(base, str[*i]) * my_compute_power_rec2(nbase, p);
        p--;
        (*i)++;
    }
    res *= charge;
    return (res);
}