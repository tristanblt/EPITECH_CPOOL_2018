/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** my_strcat
*/

#include "bistro_matic.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = 0;

    len = my_strlen(dest);
    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}