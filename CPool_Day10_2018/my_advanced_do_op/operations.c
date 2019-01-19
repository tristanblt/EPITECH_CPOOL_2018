/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** operations
*/

#include "my.h"

int my_add(int a, int b)
{
    my_put_nbr(a + b);
    return (0);
}

int my_sub(int a, int b)
{
    my_put_nbr(a - b);
    return (0);
}

int my_mul(int a, int b)
{
    my_put_nbr(a * b);
    return (0);
}

int my_div(int a, int b)
{
    if (b != 0)
        my_put_nbr(a / b);
    else
        my_putstr("Stop, division by zero\n");
    return (0);
}

int my_mod(int a, int b)
{
    if (b != 0)
        my_put_nbr(a % b);
    else
        my_putstr("Stop, modulo by zero\n");
    return (0);
}
