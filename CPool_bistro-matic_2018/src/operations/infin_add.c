/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** infin_add
*/

#include "bistro_matic.h"

char *add(char *s1, char *s2, char *result)
{
    char deduc = 0;
    int i = 0;
    char c_smallest;
    char calcul;
    my_revstrdouble(s1, s2);
    for (i = 0; i < my_strlen(s1); i++) {
        c_smallest = change_smallest(i, s2);
        calcul = (s1[i] - 48) + c_smallest + deduc;
        if (calcul > 9) {
            result[i] = calcul % 10 + 48;
            deduc = 1;
        }
        else {
            result[i] = calcul + 48;
            deduc = 0;
        }
    }
    if (deduc != 0)
        result[i] = '1';
    return (my_revstr(result));
}

int sub_if(char c_s1, char c_smallest, char *result, int deduc)
{
    if (c_s1 - 48 < c_smallest) {
        *result = (10 + c_s1) - (c_smallest + deduc);
        deduc = 1;
    }
    else if (c_s1 - 48 == c_smallest)
        *result = (10 - deduc) % 10 + 48;
    else {
        *result = c_s1 - (c_smallest + deduc);
        deduc = 0;
    }
    return (deduc);
}

char *sub(char *s1, char *s2, char *result)
{
    char deduc = 0;
    char c_smallest;
    char *sub_spe = malloc(sizeof(char) * (my_strlen(s1) * my_strlen(s2) * 2));
    char ten[3] = {'1', '0', 0};

    my_strcpy(sub_spe, "-1");
    put_minus(s1, &result);
    my_revstrdouble(s1, s2);
    for (int i = 0; i < my_strlen(s1) && s1[i] != '-'; i++) {
        my_strcpy(sub_spe, infin_mul(sub_spe, ten));
        c_smallest = change_smallest_sub(i, s2);
        deduc = sub_if(s1[i], c_smallest, &result[i], deduc);
    }
    for (int i = my_strlen(result) - 1; result[i] == '0' && i > 0; i--)
        result[i] = 0;
    if (deduc) {
        my_strcpy(result, infinad(sub_spe, my_revstr(result)));
    } else
        return (my_revstr(result));
    free(sub_spe);
    return (result);
}

char *infinad(char *s1, char *s2)
{
    char *big = find_biggest(s1, s2);
    char *small = find_smallest(s1, s2);
    char *result = malloc(sizeof(char) * (my_strlen(big) + 2));

    if (result == NULL)
        exit(EXIT_FAIL);
    if (s1[0] == '-' && s2[0] == '-') {
        result[0] = '-';
        add(big + 1, small + 1, result + 1);
    }
    else if (s1[0] == '-' || s2[0] == '-')
        sub(big, small, result);
    else
        add(big, small, result);
    my_revstr(s2);
    my_revstr(s1);
    if (my_strcmp(result, "-0") == 0)
        my_strcpy(result, "0");
    if (result[0] == '-' && result[1] == '-')
        result+=2;
    return (result);
}