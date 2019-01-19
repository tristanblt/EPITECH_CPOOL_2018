/*
** EPITECH PROJECT, 2018
** my_strswap
** File description:
** my_strswap
*/

#include "bistro_matic.h"

void my_memset(char *str, int len)
{
    for (int i = 0; i < len + 1; i++)
        str[i] = 0;
}

void my_memset_zerochar(char *str, int len)
{
    for (int i = 0; i < len + 1; i++)
        str[i] = '0';
}

void my_strswap(char **str1, char **str2)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(*str1) + 1));
    char *tmp2 = malloc(sizeof(char) * (my_strlen(*str2) + 1));

    if (tmp == NULL || tmp2 == NULL)
        exit(EXIT_FAIL);
    my_strcpy(tmp2, *str2);
    *str2 = malloc(sizeof(char) * (my_strlen(*str1) + 1));
    if (*str2 == NULL)
        exit(EXIT_FAIL);
    my_strcpy(tmp, *str1);
    my_memset(*str1, my_strlen(*str1));
    my_strcpy(*str1, tmp2);
    my_strcpy(*str2, tmp);
}