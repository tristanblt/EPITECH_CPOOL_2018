/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** dupli strings to n
*/

#include "my_strlen2.c"
#include "my_strcpy.c"

int my_strlen2(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_revstr(char *str)
{
    int i = 0;
    char str2[my_strlen2(str)];

    my_strcpy(str2, str);
    while (str[i] != '\0') {
        str[i] = str2[my_strlen2(str) - 1 - i];
        i++;
    }
    str[i] = '\0';
    return (str);
}