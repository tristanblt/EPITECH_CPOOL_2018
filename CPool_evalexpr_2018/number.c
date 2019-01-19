/*
** EPITECH PROJECT, 2018
** number.c
** File description:
** number
*/

//str[0] = &str[0][i]; ligne 58

int size_n(int nbr)
{
    int i = 0;

    while (nbr > 9) {
        nbr /= 10;
        i++;
    }
    return (i+1);
}

int my_nbrlen(char *str)
{
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        i++;
    }
    return (i);
}

int my_strlen(char const *str)
{
    int	i = 0;
    while (*(str + i) != '\0') {
        i++;
    }
    return (i);
}

int my_testnbr(char **str)
{
    int nbr = 0;
    int nbr2 = 0;
    int i = 0;
    int j = 0;
    int pwr = 0;

    j = my_nbrlen(*str);
    pwr = j - 1;
    while (str[0][i] && (str[0][i] >= '0' && str[0][i] <= '9')) {
        nbr = str[0][i] - 48;
        while (pwr > 0) {
            nbr = nbr * 10;
            pwr--;
        }
        nbr2 = nbr2 + nbr;
        i++;
        pwr = j - 1 - i;
    }
    return (nbr2);
}

int number(char *str)
{
    int nbr2 = 0;

    if (str[0] < '0' || str[0] > '9') {
        return (0);
    }
    else {
        nbr2 = my_testnbr(&str);
        return (nbr2);
    }
}