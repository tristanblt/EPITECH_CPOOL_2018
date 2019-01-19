/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** task07 day03
*/

void my_putchar(char c);

int next_put_str(long power, int temp, int nb, int c_start)
{
    power /= 10;
    while (power > 1) {
        temp = nb;
        temp = temp / power;
        nb -= power * temp;
        my_putchar(temp + '0');
        power /= 10;
    }
    my_putchar(c_start + '0');
    return (0);
}

int my_put_nbr(int nb)
{
    int answr = nb;
    long power = 1;
    int temp = nb;
    char c_start;

    if (nb < 0) {
        answr *= -1;
        nb *= -1;
        temp *= -1;
	my_putchar('-');
    }
    c_start = nb % 10;
    while (answr > 0) {
        answr /= 10;
        power *= 10;
    }
    next_put_str(power, temp, nb, c_start);
    return (0);
}
