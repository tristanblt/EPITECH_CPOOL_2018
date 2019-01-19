/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_putstr
*/

#include "bistro_matic.h"

int my_putstr(char *str)
{
    int	i = 0;
    while (*(str + i) != '\0') {
	my_putchar(*(str + i));
        i++;
    }
    return (0);
}