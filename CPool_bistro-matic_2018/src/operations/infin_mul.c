/*
** EPITECH PROJECT, 2018
** CPool_tempbistro_2018
** File description:
** infin_mul
*/
#include "bistro_matic.h"
#include <string.h>

int neg_res_len(char **s1, char **s2, int *len1, int *len2)
{
    if (**s1 == '-' && **s2 == '-') {
        (*s1)++;
        (*s2)++;
        (*len1)--;
        (*len2)--;
        return (0);
    }
    if (**s1 == '-' && **s2 != '-') {
        (*s1)++;
        (*len1)--;
        return (1);
    }
    if (**s2 == '-' && **s1 != '-') {
        (*s2)++;
        (*len2)--;
        return (1);
    }
    return (0);
}

void manage_res_mul(char **res, int len1, int len2, char is_neg)
{
    if (my_strcmplen(*res, "0") != 0) {
        res[0][len1 + len2] = 0;
        while (*res[0] == '0')
            (*res)++;
        if (is_neg) {
            (*res)--;
            *res[0] = '-';
        }
    }
}

int test_neg_mul(char **res)
{
    (*res)++;
    return (1);
}

int is_zero_mul(char *s1, char *s2, char **res)
{
    if (s1[0] == '0' || s2[0] == '0') {
        my_strcpy(*res, "0");
        return (1);
    }
    return (0);
}

char *infin_mul(char *s1, char *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    char *res = malloc(sizeof(char) * (len1 * len2 * 2));
    int calc = 0;
    char is_neg = 0;

    if (res == NULL)
        exit(EXIT_FAIL);
    my_memset_zerochar(res, len1 + len2);
    if (neg_res_len(&s1, &s2, &len1, &len2))
        is_neg = test_neg_mul(&res);
    for (int i = len1 - 1; i >= 0 && !is_zero_mul(s1, s2, &res); i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            calc = (s1[i] - '0') * (s2[j] - '0');
            res[i + j] += ((res[i + j + 1] + calc - '0') / 10);
            res[i + j + 1] = ((res[i + j + 1] + calc - '0') % 10) + '0';
        }
    }
    manage_res_mul(&res, len1, len2, is_neg);
    return (res);
}