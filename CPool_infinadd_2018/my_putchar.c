/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}