/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** find_sized
*/

#include "bistro_matic.h"

char *find_biggest(char *a, char *b)
{
    int c = 0;
    int d = 0;

    if (a[0] == '-')
        c++;
    if (b[0] == '-')
        d++;
    if (my_strcmplen(a + c, b + d) >= 0)
        return (a);
    else
        return (b);
}

char *find_smallest(char *a, char *b)
{
    int c = 0;
    int d = 0;

    if (a[0] == '-')
        c++;
    if (b[0] == '-')
        d++;
    if (my_strcmplen(a + c, b + d) < 0)
        return (a);
    else
        return (b);
}