/*
** EPITECH PROJECT, 2018
** number.c
** File description:
** number
*/

#include "bistro_matic.h"

int is_neg_result(char **s1, char **s2)
{
    if (**s1 == '-' && **s2 == '-') {
        (*s1)++;
        (*s2)++;
        return (0);
    }
    if (**s1 == '-' && **s2 != '-') {
        (*s1)++;
        return (1);
    }
    if (**s2 == '-' && **s1 != '-') {
        (*s2)++;
        return (1);
    }
    return (0);
}

char *my_moins_devant(char *s1)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(s1) + 2));
    if (tmp == NULL)
        exit(EXIT_FAIL);
    tmp[0] = '-';
    tmp++;
    my_strcpy(tmp, s1);
    tmp--;
    return (tmp);
}

int test_neg(char const *str, int *i)
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

char *number(char *str, char *base, int *k)
{
    int i = 0;
    int j = 0;
    int neg = test_neg(str, &i);
    char *result = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (result == NULL)
        exit(EXIT_FAIL);
    if (neg == -1) {
        result[0] = '-';
        j++;
        (*k)++;
    }
    while (is_number_base(str[i], base)) {
        result[j] = str[i];
        i++;
        j++;
        (*k)++;
    }
    return (base_x_to_ten(result, base));
}