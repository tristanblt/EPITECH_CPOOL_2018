/*
** EPITECH PROJECT, 2018
** my_postfix_to_answer.c
** File description:
** my_postfix_to_answer
*/

#include "bistro_matic.h"

int is_sign(char c)
{
    if (c != '+' && c != '*' && c != '%' && c != '/' && c != '-')
        return (0);
    return (1);
}

char *moddiv(char *a, char *b, int c)
{
    if (c == '/') {
        if (b[0] != '0')
            return (infin_div(a, b));
        else {
            my_putstr(ERROR_MSG);
            exit(EXIT_FAIL);
            return ("0");
        }
    }
    else if (c == '*')
        return (infin_mul(a, b));
    else {
        if (b[0] != '0')
            return (infin_mod(a, b));
        else {
            my_putstr(ERROR_MSG);
            exit(EXIT_FAIL);
            return ("0");
        }
    }
}

char *addsub(char *a, char *b, int c)
{
    char minus[3] = {'-', '1', 0};
    char *result = malloc(sizeof(char) * (my_strlen(b) + my_strlen(a) + 2));

    if (result == NULL)
        exit(EXIT_FAIL);
    if (c == '-') {
        my_strcpy(result, infinad(a, infin_mul(minus, b)));
        return (result);
    }
    else {
        free(result);
        return (infinad(a, b));
    }
}

char *postfix_to_ans(int size, char **tab)
{
    int j = 0;
    char **tmp = malloc_dblptr(tmp = NULL, size);

    if (tmp == NULL)
        exit(EXIT_FAIL);
    for (int i = 0; i < size + 2 && tab[i] != NULL; i++) {
        if ((tab[i][0] == '+' || (tab[i][0] == '-' && tab[i][1] == 0))) {
            my_strcpy(tmp[j-2], addsub(tmp[j-2], tmp[j-1], tab[i][0]));
            j--;
        } else if ((tab[i][0] == '/' || tab[i][0] == '%' || tab[i][0] == '*')) {
            my_strcpy(tmp[j-2], moddiv(tmp[j-2], tmp[j-1], tab[i][0]));
            j--;
        } else {
            tmp[j] = tab[i];
            j = tab[i][0] < 21 ? j : j+1;
        }
    }
    if (my_strcmp(tmp[0], "") == 0)
        tmp[0][0] = '0';
    free(tab);
    return (tmp[0]);
}