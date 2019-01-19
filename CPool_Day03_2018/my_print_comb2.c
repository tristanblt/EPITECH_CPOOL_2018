/*
** EPITECH PROJECT, 2018
** my_print_comb2.h
** File description:
** task06 day03
*/

int together_numb(int a, int b)
{
    int calcul = a - 48 + (b - 48) * 10;
    return (calcul);
}

int print_my_comb2(int a, int b, int c, int d)
{
    my_putchar(d);
    my_putchar(c);
    my_putchar(' ');
    my_putchar(b);
    my_putchar(a);
    if (together_numb(c, d) != 98) {
	my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int a = 48;
    int b = 48;
    int c = 48;
    int d = 48;
    int i = 0;

    while (together_numb(c, d) != 99 || together_numb(a, b) != 98) {
        a++;
        if (a >= 58) {
            b++;
            a = 48;
	}
        if (b >= 58) {
            c++;
            b = 48;
        }
        if (c >= 58) {
            d++;
            c = 48;
        }
        if(together_numb(a, b) != together_numb(c, d)) {
            if (together_numb(a, b) > together_numb(c, d)) {
                print_my_comb2(a, b, c, d);
            }
        }
        i++;
    }
    return (0);
}

