/*
** EPITECH PROJECT, 2018
** CPool_tempbistro_2018
** File description:
** infin_mul
*/

#include "bistro_matic.h"

void my_strcpysub(char **dest, char **src)
{
    *dest[0] = '-';
    (*dest)++;
    my_strcpy(*dest, *src);
    (*dest)--;
}

void clean_str(char **str)
{
    while ((*str[0] < '0' || *str[0] > '9') && *str[0] != '-')
        (*str)++;
}

char *infin_mod(char *s1, char *s2)
{
    char *scale_ten_pow = malloc(sizeof(char) * (my_strlen(s1) + 2));
    char *s2_dymc = malloc(sizeof(char) * (my_strlen(s1) + 2));
    char *s1_dymc = malloc(sizeof(char) * (my_strlen(s1) + 3));
    char ten[3] = {'1', '0', 0};
    if (scale_ten_pow == NULL||s2_dymc == NULL||s1_dymc == NULL)
        exit(EXIT_FAIL);
    my_strcpy(s1_dymc, s1);
    for (int i = 0; my_strcmplen(s1_dymc, s2) >= 0; i++) {
        my_strcpy(scale_ten_pow, "10");
        my_strcpy(s2_dymc, s2);
        while (my_strcmplen(infin_mul(s2, scale_ten_pow), s1_dymc) <= 0)
            my_strcpy(scale_ten_pow, infin_mul(scale_ten_pow, ten));
        my_strcpy(s2_dymc, infin_mul(s2, scale_ten_pow));
        s2_dymc[my_strlen(s2_dymc) - 1] = 0;
        while (my_strcmplen(s1_dymc, s2_dymc) >= 0) {
            my_strcpy(s1_dymc, infinad(s1_dymc, my_moins_devant(s2_dymc)));
        }
    }
    free(s2_dymc);
    return (s1_dymc);
}