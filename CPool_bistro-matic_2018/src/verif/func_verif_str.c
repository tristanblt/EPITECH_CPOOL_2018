/*
** EPITECH PROJECT, 2018
** CPool_bistro_matic_2018
** File description:
** func_verif_str
*/

#include "bistro_matic.h"

void change_sign(char **str, char *ope)
{
    for (int i = 0; str[0][i]; i++) {
        if (str[0][i] == ope[0])
            str[0][i] = '(';
        if (str[0][i] == ope[1])
            str[0][i] = ')';
        if (str[0][i] == ope[2])
            str[0][i] = '+';
        if (str[0][i] == ope[3])
            str[0][i] = '-';
        if (str[0][i] == ope[4])
            str[0][i] = '*';
        if (str[0][i] == ope[5])
            str[0][i] = '/';
        if (str[0][i] == ope[6])
            str[0][i] = '%';
    }
}

int is_c_op(char c, char *op)
{
    int i = 2;

    while (op[i] != '\0') {
        if (c == op[i])
            return (1);
        i++;
    }
    return (0);
}

int is_calc_correct(char *calc, char *op)
{
    if (is_c_op(calc[0], op) == 1 && calc[0] != op[3])
        return (0);
    while (*calc) {
        if ((*calc < 21 || *calc > 126) && *calc != 10)
            return (0);
        if (calc[0] == op[0] && is_c_op(calc[1], op) == 1 && calc[1] != op[3])
            return (0);
        if (calc[0] == op[2] && is_c_op(calc[1], op) == 1)
            return (0);
        if (calc[0] == op[3] && is_c_op(calc[1], op) == 1)
            return (0);
        if (calc[0] == op[4] && is_c_op(calc[1], op) == 1 && calc[1] != op[3])
            return (0);
        if (is_c_op(calc[0], op) && is_c_op(calc[1], op) && calc[1] != op[3])
            return (0);
        if (is_c_op(calc[0], op) && calc[1] == '\0')
            return (0);
        calc++;
    }
    return (1);
}