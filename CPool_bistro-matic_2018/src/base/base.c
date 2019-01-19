/*
** EPITECH PROJECT, 2018
** CPool_bistro_matic_2018
** File description:
** base
*/

#include "bistro_matic.h"

char *base_x_to_ten(char *result, char *base)
{
    char *nbase = my_nbr_char(my_strlen(base));
    int p = 0;
    int is_neg = result[0] == '-' ? 1 : 0;
    char *res = malloc(sizeof(char)* 300);

    if (res == NULL)
        exit(EXIT_FAIL);
    base_ten_to_x_neg(&res, &result, is_neg);
    p = my_strlen(result) - 1;
    while (p >= 0) {
        my_strcpy(res, infinad(res, infin_mul(find_base(result[\
        my_strlen(result) - p - 1], base), power_ten(nbase, p))));
        p--;
    }
    if (is_neg)
        res--;
    if (my_strcmp(res, "") == 0)
        res[0] = '0';
    return (res);
}

void manage_res(char **res, int is_neg)
{
    my_revstr(*res);
    if (is_neg)
        (*res)--;
    if (my_strcmp(*res, "-0") == 0)
        my_strcpy(*res, "0");
    if (*res[0] == 0)
        my_strcpy(*res, "0");
}

char *base_ten_to_x(char *str, char *base)
{
    char *res = malloc(sizeof(char) * (10/my_strlen(base) + 2)*my_strlen(str));
    char *mod_res = malloc(sizeof(char) * (my_strlen(str) + 1));
    char* div_res = malloc(sizeof(char) * (my_strlen(str) + 1));
    int is_neg = str[0] == '-' ? 1 : 0;

    if (res == NULL || mod_res == NULL || div_res == NULL)
        exit(EXIT_FAIL);
    if (is_neg) {
        res[0] = '-';
        res++;
        str++;
    }
    my_strcpy(div_res, str);
    for (int i = 0; my_strcmplen(div_res, "0") > 0; i++){
        my_strcpy(mod_res, infin_mod(div_res, my_nbr_char(my_strlen(base))));
        my_strcpy(div_res, infin_div(div_res, my_nbr_char(my_strlen(base))));
        res[i] = base[my_getnbr(mod_res)];
    }
    manage_res(&res, is_neg);
    free(mod_res);
    return (res);
}