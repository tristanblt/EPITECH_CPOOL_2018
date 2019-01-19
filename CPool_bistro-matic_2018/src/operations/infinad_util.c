/*
** EPITECH PROJECT, 2018
** CPool_bistro_matic_2018
** File description:
** infinad_util
*/

#include "bistro_matic.h"

char **malloc_dblptr(char **arr, int size)
{
    arr = malloc(sizeof(char *) * (size + 2));
    for (int i = 0; i < size + 2; i++)
        *(arr+i) = malloc(sizeof(char) * (size + 2));
    return (arr);
}

int finds(char *str, char *base, char *ope)
{
    int max = 0;
    int count = 0;
    int count_ope = 0;

    for (int i = 0; str[i]; i++) {
        if (is_number_base(str[i], base)) {
            count++;
        }
        else {
            max = count > max ? count : max;
            count = 0;
        }
        if (is_number_base(str[i], ope))
            count_ope++;
    }
    return (max + count_ope * 2);
}

char change_smallest_sub(int i, char *s2)
{
    if (i >= my_strlen(s2) || s2[i] == '-')
        return (0);
    else
        return (s2[i] - 48);
}

void put_minus(char *s1, char **result)
{
    if (s1[0] == '-') {
        *result[0] = '-';
        (*result)++;
    }
}

char change_smallest(int i, char *s2)
{
    if (i >= my_strlen(s2))
        return (0);
    else
        return (s2[i] - 48);
}