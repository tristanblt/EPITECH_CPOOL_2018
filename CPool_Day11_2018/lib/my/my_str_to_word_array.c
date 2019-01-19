/*
** EPITECH PROJECT, 2018
** CPool_Day08_2018
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

char *my_strdup(char const *str);

int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int c_nw(char const *str)
{
    int i = 0;
    int nbr = 0;

    while (str[i] != '\0') {
        if (!is_alpha(str[i]) && str[i + 1] && is_alpha(str[i + 1]))
            nbr++;
        i++;
    }
    return (nbr + 2);
}

int c_maxl(char const *str)
{
    int i = 0;
    int nbr = 1;
    int max = 0;

    while (str[i] != '\0') {
        if (!is_alpha(str[i]) && str[i + 1] && is_alpha(str[i + 1]))
            nbr = 0;
        if (nbr > max)
            max = nbr;
        i++;
        nbr++;
    }
    return (max + 1);
}

char *my_str_to_alpha(char *str, char const *to_find)
{
    int i = 0;

    while (!is_alpha(str[i])) {
        i++;
    }
    return (str + i);
}

char **my_str_to_word_array(char const *str)
{
    char **array = NULL;
    int j = 0;
    int word = 0;

    str = my_str_to_alpha(my_strdup(str), "s");
    array = (char **) malloc(c_nw(str) * sizeof(char *));
    for (int i = 0; i < c_nw(str) + 1; i++)
        array[i] = (char *) malloc(c_maxl(str) * sizeof(char));
    for (int i = 0; str[i] != '\0'; i++)
        if (!is_alpha(str[i]) && str[i + 1] && is_alpha(str[i + 1])) {
            array[word][j] = '\0';
            j = 0;
            word++;
        }
        else if (is_alpha(str[i])) {
            array[word][j] = str[i];
            j++;
        }
    array[word][j] = '\0';
    array[word + 1] = NULL;
    return (array);
}