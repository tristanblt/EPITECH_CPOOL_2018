/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_revstr
*/

#include "bistro_matic.h"

void my_revstrdouble(char *str, char *str2)
{
    my_revstr(str);
    my_revstr(str2);
}

char *my_revstr(char *str)
{
    int i = 0;
    char tempo[my_strlen(str)];

    my_strcpy(tempo, str);
    while (str[i] != '\0') {
        str[i] = tempo[my_strlen(str) - 1 - i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *my_revstrzero(char *str)
{
    char c;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    i = 0;
    while (str[i] == '0' && str[i + 1] != '\0') {
        str[i] = 5;
        i++;
    }
    return (str);
}