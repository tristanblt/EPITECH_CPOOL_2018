/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** task 02 day03
*/

int my_print_revalpha(void)
{
    int i = 122;

    while (i >= 97) {
        my_putchar(i);
        i--;
    }
    return (0);
}
