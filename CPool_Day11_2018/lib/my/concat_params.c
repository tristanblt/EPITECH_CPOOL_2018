/*
** EPITECH PROJECT, 2018
** CPool_Day08_2018
** File description:
** concat_params
*/

#include <stdlib.h>
#include "my.h"

char *concat_params(int argc, char **argv)
{
    int i = 0;
    char *rtrn = NULL;
    int len = 0;

    while (i < argc) {
        len += my_strlen(argv[i]) + 1;
        i++;
    }
    i = 0;
    rtrn = malloc(sizeof(char) * len);
    while (i < argc) {
        my_strcat(rtrn, argv[i]);
        if (i != argc - 1)
            my_strcat(rtrn, "\n");
        i++;
    }
    return (rtrn);
}