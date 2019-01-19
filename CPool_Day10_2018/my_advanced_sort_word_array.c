/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** my_advanced_sort_word_array
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

void my_adv_sort_next(char **tab, int i, int(*cmp)(char const *, char const *))
{
    char temp[100];
    int j = 0;

    for (j = i + 1; j < my_array_length(tab); j++) {
        if (cmp(tab[i], tab[j]) > 0) {
            my_strcpy(temp, tab[i]);
            my_strcpy(tab[i], tab[j]);
            my_strcpy(tab[j], temp);
        }
    }
}

int my_advanced_sort_word_array(char **tab,
int(*cmp)(char const *, char const *))
{
    int i = 0;

    for (i = 0; i < my_array_length(tab) - 1; i++) {
        my_adv_sort_next(tab, i, cmp);
    }
    return (0);
}