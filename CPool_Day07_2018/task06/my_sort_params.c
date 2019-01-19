/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** my_print_params
*/

#include "my.h"

int my_strcmp_sort(const char *s1, const char *s2)
{
    int i = 0;
    int equal = 0;

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i] && s1[0] < s2[0]) {
            equal = s1[0] - s2[0];
        }
        else if (s1[i] != s2[i] && s1[0] > s2[0]) {
            equal = s1[0] - s2[0];
        }
        i++;
    }
    return (equal);
}

char *my_strcpy_sort(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int my_putstr_sort(char const *str)
{
    int	i = 0;
    while (*(str + i) != '\0') {
	my_putchar(*(str + i));
        i++;
    }
    return (0);
}

void display_argv(int argc, char margv[argc][100])
{
    int i = 0;

    while (i < argc) {
        my_putstr_sort(margv[i]);
        my_putchar('\n');
        i++;
    }
}

int my_sort_params(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    char temp[100];
    char margv[argc][100];

    while (i < argc) {
        my_strcpy_sort(margv[i], argv[i]);
        i++;
    }
    for (i = 0; i < argc - 1; i++) {
        for (j = i + 1; j < argc; j++) {
            if (my_strcmp_sort(margv[i], margv[j]) > 0) {
                my_strcpy_sort(temp, margv[i]);
                my_strcpy_sort(margv[i], margv[j]);
                my_strcpy_sort(margv[j], temp);
            }
        }
    }
    display_argv(argc, margv);
    return (0);
}