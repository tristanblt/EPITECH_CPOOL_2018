/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** calc a square
*/

int my_compute_square_root(int nb)
{
    int n = nb;
    int i = 1;

    if (nb <= 0) {
        return (0);
    }
    while (my_compute_power_rec(n, 2) > nb) {
        n = nb / i;
        i++;
    }
    if (my_compute_power_rec(n, 2) == nb) {
        return (n);
    }
    else {
        return (0);
    }
}
