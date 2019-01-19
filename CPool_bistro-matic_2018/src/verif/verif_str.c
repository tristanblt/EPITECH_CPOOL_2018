/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** verif_str
*/

#include "bistro_matic.h"

int char_not_same(char *ope_list)
{
    int i = 0;
    int cmp = 1;
    int lengh = my_strlen(ope_list);

    while (i < lengh - 1) {
        if (ope_list[i] == ope_list[i + cmp])
            return (0);
        cmp++;
        if (i + cmp >= lengh) {
            i++;
            cmp = 1;
        }
    }
    return (1);
}

int op_not_base(char *ope, char *base)
{
    char *small_list = malloc(sizeof(char) * my_strlen(ope) + my_strlen(base));
    char *big_list = malloc(sizeof(char) * my_strlen(ope) + my_strlen(base));
    int i = 0;
    int j = 0;

    if (small_list == NULL || big_list == NULL)
        exit(EXIT_FAIL);
    small_list = find_smallest(ope, base);
    big_list = find_biggest(ope, base);
    while (big_list[i] != '\0') {
        if (big_list[i] == small_list[j])
            return (0);
        else
            j++;
        if (small_list[j] == '\0') {
            j = 0;
            i++;
        }
    }
    return (1);
}

void change_minus(char *str)
{
    int i_save = 0;
    int serie = 0;
    int charge = 1;

    for (int i = 0; str[i]; i++) {
        if ((str[i] == '-' || str[i] == '+') && !serie) {
            serie = 1;
            i_save = i;
        }
        else if (serie && !(str[i] == '-' || str[i] == '+' || str[i] == '(')){
            str[i_save] = charge == 1 ? '+': '-';
            serie = 0;
            charge = 1;
        }
        if (str[i] == '-' && serie)
            charge *= -1;
        if ((str[i] == '-' || str[i] == '+') && serie)
            str[i] = 10;
    }
}

int verif_minus_and_par(char *str, char *base)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == '(' && (is_number_base(str[i-1], base)||str[i-1] == ')'))
            return (0);
        else if (str[i] == ')' && is_number_base(str[i+1], base))
            return (0);
    change_minus(str);
    return (1);
}

int verif_str(char *str, char *ope, char *base)
{
    int par = 0;
    int i;

    for (i = 0; str[i]; i++) {
        if (str[i] == '(')
            par++;
        else if (str[i] == ')')
            par--;
    }
    if (!par && i > 0 && verif_minus_and_par(str, base) && char_not_same(ope) \
    && char_not_same(base) && op_not_base(ope, base)) {
        change_sign(&str, ope);
        if (!(is_calc_correct(str, ope)))
            return (0);
        return (1);
    }
    else
        return (0);
}