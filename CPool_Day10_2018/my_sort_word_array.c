/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** my_sort_word_array
*/

#include "my.h"

int my_array_length(char **tab)
{
    int i = 0;

    while (tab[i]) {
        i++;
    }
    return (i);
}

void my_sort_word_array_next(char **tab, int i)
{
    char temp[100];
    int j = 0;

    for (j = i + 1; j < my_array_length(tab); j++) {
        if (my_strcmp(tab[i], tab[j]) > 0) {
            my_strcpy(temp, tab[i]);
            my_strcpy(tab[i], tab[j]);
            my_strcpy(tab[j], temp);
        }
    }
}

char **my_sort_word_array(char **tab)
{
    int i = 0;

    for (i = 0; i < my_array_length(tab) - 1; i++) {
        my_sort_word_array_next(tab, i);
    }
    return (tab);
}