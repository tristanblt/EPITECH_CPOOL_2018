/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** infin_add
*/

#include <stdlib.h>

int my_strlen(char *str);
char *find_biggest(char *a, char *b);
char *find_smallest(char *a, char *b);
char *my_revstrzero(char *str);
void my_revstrdouble(char *str, char *str2);

char add_next(char *result, char deduc, char *s1, char *s2)
{
    char c_smallest;
    char calcul;
    int i = 0;

    for (i = 0; i < my_strlen(s1); i++) {
        if (i >= my_strlen(s2))
            c_smallest = 0;
        else
            c_smallest = s2[i] - 48;
        calcul = (s1[i] - 48) + c_smallest + deduc;
        if (calcul > 9) {
            result[i] = calcul % 10 + 48;
            deduc = 1;
        }
        else {
            result[i] = calcul + 48;
            deduc = 0;
        }
    }
    return (deduc);
}

char *add(char *s1, char *s2, char *result)
{
    char deduc = 0;
    int i = 0;
    char c_smallest;
    char calcul;

    my_revstrdouble(s1, s2);
    for (i = 0; i < my_strlen(s1); i++) {
        if (i >= my_strlen(s2))
            c_smallest = 0;
        else
            c_smallest = s2[i] - 48;
        calcul = (s1[i] - 48) + c_smallest + deduc;
        if (calcul > 9) {
            result[i] = calcul % 10 + 48;
            deduc = 1;
        }
        else {
            result[i] = calcul + 48;
            deduc = 0;
        }
    }
    if (deduc != 0)
        result[i] = '1';
    return (my_revstrzero(result));
}

char *sub(char *s1, char *s2, char *result)
{
    char deduc = 0;
    int i = 0;
    char c_smallest;
    char *sub_spe = malloc(sizeof(char) * my_strlen(s2) + 1);
    char ten[2] = {1, 0};

    sub_spe[0] = "-";
    sub_spe[1] = "1";
    if (s1[0] == '-') {
        result[0] = '-';
        result++;
    }
    my_revstrdouble(s1, s2);
    for (i = 0; i < my_strlen(s1) && s1[i] != '-'; i++) {
        infin_mult(sub_spe, ten);
        if (i >= my_strlen(s2) || s2[i] == '-')
            c_smallest = 0;
        else
            c_smallest = s2[i] - 48;
        if (s1[i] - 48 < c_smallest) {
            result[i] = (10 + s1[i]) - (c_smallest + deduc);
            deduc = 1;
        }
        else if (s1[i] - 48 == c_smallest)
            result[i] = (10 - deduc) % 10 + 48;
        else {
            result[i] = s1[i] - (c_smallest + deduc);
            deduc = 0;
        }
    }
    if (deduc == 1)
        return (infinad(sub_spe, my_revstrzero(result)));
    else
        return (my_revstrzero(result));
}

char *infinad(char *s1, char *s2)
{
    char *big = find_biggest(s1, s2);
    char *small = find_smallest(s1, s2);
    char *result = malloc(sizeof(char) * (my_strlen(big) + 2));

    if (s1[0] == '-' && s2[0] == '-') {
        result[0] = '-';
        add(big + 1, small + 1, result + 1);
    }
    else if (s1[0] == '-' || s2[0] == '-')
        sub(big, small, result);
    else
        add(big, small, result);
    return (result);
}