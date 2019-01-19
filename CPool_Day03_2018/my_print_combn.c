/*
** EPITECH PROJECT, 2018
** my_print_combn.c
** File description:
** Same as comb but relou
*/

int my_print_combn(int n)
{
    int i = 0;
    int power = 1;
    int j = 0;

    while (i < n) {
        power *= 10;
	i++;
    }
    power /= 10;
    i = 0;
    while (i <= power * 10) {
        if (i/100 < (i / 10) % 10 && (i / 10) % 10 < i % 10) {
            j = 0;
            my_put_nbr(i);
            if (i != 789) {
                my_putchar(',');
		my_putchar(' ');
            }
        }
        i++;
    }
    return (0);
}
