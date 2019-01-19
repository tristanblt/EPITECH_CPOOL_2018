/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** copies the string from src to dest
*/

#include "bistro_matic.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    my_memset(dest, my_strlen(dest) + 1);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}