/*
** EPITECH PROJECT, 2018
** CPool_tempbistro_2018
** File description:
** infin_mul
*/

#include "bistro_matic.h"

int my_strcmplen(char const *s1, char const *s2)
{
    int k;

    if (*s1 == '-')
        s1++;
    if (*s2 == '-')
        s2++;
    if (my_strlen(s1) > my_strlen(s2))
        return (1);
    if (my_strlen(s1) < my_strlen(s2))
        return (-1);
    else {
        for (k = 0; s1[k] == s2[k] && s1[k] != 0 && s2[k] != 0; k++);
        return (s1[k] - s2[k]);
    }
}

int zlen(char *str)
{
    int res = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '0')
            res++;
    }
    return (res);
}

void set_div_struct(char *s1, char *s2, stc_d *d)
{
    d->len1 = my_strlen(s1);
    d->len2 = my_strlen(s2);
    d->x = 0;
    d->ten = malloc(sizeof(char) * 3);
    my_strcpy(d->ten, "10");
    d->stenpow = malloc(sizeof(char) * (my_strlen(s1) + 2));
    d->s2_dyn = malloc(sizeof(char) * (my_strlen(s1) + 2));
    d->s1_dyn = malloc(sizeof(char) * (my_strlen(s1) + 3));
    d->res = malloc(sizeof(char) * (my_strlen(s1) + 2));
}

stc_d core_div(stc_d d, char *s2)
{
    for (int i = 0; my_strcmplen(d.s1_dyn, s2) >= 0; i++) {
        my_strcpy(d.stenpow, "10");
        my_strcpy(d.s2_dyn, s2);
        while (my_strcmplen(infin_mul(s2, d.stenpow), d.s1_dyn) <= 0)
            my_strcpy(d.stenpow, infin_mul(d.stenpow, d.ten));
        my_strcpy(d.s2_dyn, infin_mul(s2, d.stenpow));
        d.s2_dyn[my_strlen(d.s2_dyn) - 1] = 0;
        for (d.x = 0; my_strcmplen(d.s1_dyn, d.s2_dyn) >= 0; d.x++)
            my_strcpy(d.s1_dyn, infinad(d.s1_dyn, my_moins_devant(d.s2_dyn)));
        d.res[i] = d.x + 48;
    }
    return (d);
}

char *infin_div(char *s1, char *s2)
{
    stc_d d;

    set_div_struct(s1, s2, &d);
    if (d.stenpow == NULL||d.s2_dyn == NULL||d.s1_dyn == NULL||d.res == NULL)
        exit(EXIT_FAIL);
    if (my_strcmp(s1, "0") == 0) {
        my_strcpy(d.res, "0");
        return (d.res);
    }
    my_strcpy(d.s1_dyn, s1);
    core_div(d, s2);
    while (my_strcmplen(s1, infinad(d.s1_dyn, infin_mul(s2, d.res))) > 0)
        my_strcpy(d.res, infin_mul(d.res, d.ten));
    if (neg_res_len(&s1, &s2, &d.len1, &d.len2) && my_strcmplen(d.res, "") != 0)
        my_strcpy(d.res, my_moins_devant(d.res));
    return (d.res);
}