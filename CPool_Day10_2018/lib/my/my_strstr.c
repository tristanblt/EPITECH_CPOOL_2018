/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_strstr
*/

#include <stddef.h>

int my_strlen(char const *str);

char *next_strstr(char *str, char const *to_find, int i, int *j)
{
    if (str[i] == to_find[*j]){
        if (*j == my_strlen(to_find) - 1) {
            return (str + i - *j);
        }
        *j = *j + 1;
    }
    else {
        *j = 0;
    }
    return (NULL);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int ji = 0;
    int *j = &ji;

    while (str[i] != '\0') {
        if (next_strstr(str, to_find, i, j) != NULL) {
            return (next_strstr(str, to_find, i, j));
        }
        i++;
    }
    return (NULL);
}