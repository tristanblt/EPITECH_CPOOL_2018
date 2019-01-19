/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** wouah
*/

int my_strlen(char const *str);

int power_c(int n)
{
    int power = 1;
    int i = 0;

    while (i < n) {
        power*=10;
        i++;
    }
    return (power);
}

int next_getnbr(int length, int j, char const *str, int charge)
{
    unsigned int calcul = 0;
    int i = 0;
    int n = 0;

    while (i <= length && length < 10) {
        calcul = power_c(length - i) * (str[j + i] - '0');
        if (n+calcul<=2147483647 || (charge==-1 && n+calcul<=2147483648)) {
            n += calcul;
            i++;
        }
        else {
            return (0);
        }
    }
    n*=charge;
    return (n);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 0;
    int n = 0;
    int charge = 1;
    int length = 0;

    while (str[i] < '0' || str[i] > '9') {
        if (str[i] == '-')
            charge*=-1;
        if (i > my_strlen(str))
            return (0);
        i++;
    }
    j = i;
    while (str[i] >= '0' && str[i] <= '9') {
        length++;
        i++;
    }
    length--;
    n = next_getnbr(length, j, str, charge);
    return (n);
}
