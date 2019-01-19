/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** operations
*/

#include "my.h"

int add(int a, int b)
{
    my_put_nbr(a + b);
    return (0);
}

int sous(int a, int b)
{
    my_put_nbr(a - b);
    return (0);
}

int mult(int a, int b)
{
    my_put_nbr(a * b);
    return (0);
}

int div(int a, int b)
{
    if (b != 0)
        my_put_nbr(a / b);
    else
        my_putstr("Stop: division by zero\n");
    return (0);
}

int mod(int a, int b)
{
    if (b != 0)
        my_put_nbr(a % b);
    else
        my_putstr("Stop: modulo by zero\n");
    return (0);
}