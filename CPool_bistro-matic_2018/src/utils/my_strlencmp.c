/*
** EPITECH PROJECT, 2018
** my_strlencmp.c
** File description:
** compares ascii codes sum and length
** of 2 strings
*/

#include "bistro_matic.h"

int my_strlencmp(char *str1, char *str2)
{
    int i = 0;
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 > len2)
        return (1);
    else if (len2 > len1)
        return (-1);
    else {
        while (str1[i] == str2[i])
            i++;
        if (str1[i] > str2[i])
            return (1);
        else if (str2[i] > str1[i])
            return (-1);
        else
            return (0);
    }
}