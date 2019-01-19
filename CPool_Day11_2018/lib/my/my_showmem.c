/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_showmem
*/

void my_putchar(char c);
int my_putnbr_base(int nbr, char const *base);

void is_printable(char c, int k, int size)
{
    if ((c < ' ' || c > '~') && (k <= size))
        my_putchar('.');
    else
        my_putchar(c);
}

void print_memoryline(char const *str, int line)
{
    long memory = (long)str + line;

    my_putchar('0');
    my_putchar('0');
    my_putnbr_base(memory, "0123456789abcdef");
    my_putchar(':');
    my_putchar(' ');
    my_putchar(' ');
}

int print_memorycase(int j, char const *str, int i)
{
    while (i >= 16 * j && i < 16 * (j + 1)) {
        if (i % 2 == 0)
            my_putchar(' ');
        if (!str[i]) {
            my_putchar(' ');
            my_putchar(' ');
        }
        my_putnbr_base(str[i], "0123456789abcdef");
        i++;
    }
    return (i);
}

int my_showmem(char const *str, int size)
{
    int line = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    while (line < size) {
        print_memoryline(str, line);
        i = print_memorycase(j, str, i);
        my_putchar(' ');
        while (k >= 16 * j && k < 16 * (j + 1)) {
            is_printable(str[k], k, size);
            k++;
        }
        line += 16;
        j++;
        my_putchar('\n');
    }
    return (0);
}