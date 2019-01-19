/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_putnbr_base
*/

int my_strlen(char const *str);
void my_putchar(char c);

int my_putnbr_base(int nbr, char const *base)
{
    int nbase = my_strlen(base);
    int str[33];
    int i = 0;
    if (nbr < 0){
        nbr*=-1;
        my_putchar('-');
    }
    while (nbr != 0) {
        str[i] = base[nbr % nbase];
        nbr /= nbase;
        i++;
    }
    i-=1;
    while (i >= 0) {
        my_putchar(str[i]);
        i--;
    }
    return (0);
}