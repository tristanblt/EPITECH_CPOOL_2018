/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018
** File description:
** my_params_to_array
*/

#include "my.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param *info_params = malloc(sizeof(struct info_param*)*(ac+1));

    while (i < ac) {
        info_params[i].length = my_strlen(av[i]);
        info_params[i].str = av[i];
        info_params[i].copy = my_strdup(av[i]);
        info_params[i].word_array = my_str_to_word_array(av[i]);
        i++;
    }
    info_params[i].str = NULL;
    return (info_params);
}