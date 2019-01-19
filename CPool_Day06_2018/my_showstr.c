/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_showstr
*/

#include "my_putnbr_base.c"

void my_putchar(char c);
int my_putnbr_base(int nbr, char const *base);

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= ' ' && str[i] <= '~') {
            my_putchar(str[i]);
        }
        else {
            my_putchar('\\');
            my_putchar('0');
            my_putnbr_base(str[i], "0123456789abcdef");
        }
        i++;
    }
    return (0);
}