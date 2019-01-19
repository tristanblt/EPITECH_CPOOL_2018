/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** same than 03 but with rec
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    else if (p > 0) {
        return (my_compute_power_rec(nb, p - 1) * nb);
    }
    else {
        return (1);
    }
}
