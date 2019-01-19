/*
** EPITECH PROJECT, 2018
** CPool_Day08_2018
** File description:
** conver_base
*/

#include <stdlib.h>
#include "my.h"

char *my_convnbr_base(int nbr, char const *base)
{
    int nbase = my_strlen(base);
    char *str = malloc(sizeof(char) * 33);
    int i = 0;
    if (nbr < 0){
        nbr*=-1;
        my_putchar('-');
    }
    while (nbr != 0) {
        str[i] = base[nbr % nbase];
        nbr /= nbase;
        i++;
    }
    return (str);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int nbr_dec = my_getnbr_base(nbr, base_from);
    char *nbr_to = malloc(sizeof(char) * 33);
    nbr_to = my_convnbr_base(nbr_dec, base_to);
    nbr_to = my_revstr(nbr_to);

    return (nbr_to);
}