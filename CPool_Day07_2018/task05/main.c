/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** main
*/

#include "my.h"

int my_putstr_rev(char const *str)
{
    int	i = 0;
    while (*(str + i) != '\0') {
	my_putchar(*(str + i));
        i++;
    }
    return (0);
}

int my_rev_params(int argc, char *argv[])
{
    int i = 0;

    while (i < argc) {
        my_putstr_rev(argv[argc - i - 1]);
        my_putchar('\n');
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    my_rev_params(argc, argv);
    return (0);
}