/*
** EPITECH PROJECT, 2018
** my_print_comb.c
** File description:
** task05 day03
*/

int print_my_comb(int one, int ten, int hundred)
{
    while (one < 58)
    {
        if (one == 57 && ten == 56 && hundred == 55) {
            my_putchar(hundred);
	    my_putchar(ten);
            my_putchar(one);
        }
        else {
            my_putchar(hundred);
            my_putchar(ten);
            my_putchar(one);
	    my_putchar(',');
            my_putchar(' ');
        }
        one++;
    }
}

int my_print_comb(void)
{
    int one = 48;
    int ten = 48;
    int hundred = 48;

    while (hundred < 56) {
        ten = hundred + 1;
        while (ten < 57) {
            one = ten + 1;
            print_my_comb(one, ten, hundred);
            ten++;
        }
        hundred++;
    }
    return (0);
}


