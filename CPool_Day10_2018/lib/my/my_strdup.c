/*
** EPITECH PROJECT, 2018
** CPool_Day08_2018
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *str)
{
    char *rtrn = NULL;

    if (malloc(sizeof(char) * (my_strlen(str) + 1)))
        rtrn = malloc(sizeof(char) * (my_strlen(str) + 1));
    else
        return (NULL);
    my_strcpy(rtrn, str);
    return (rtrn);
}