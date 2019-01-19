/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec
** File description:
** same as 01 but with recusive
*/

int my_compute_factorial_rec(int nb)
{
    int res;

    if (nb > 0 && nb <= 12) {
        return (my_compute_factorial_rec(nb - 1) * nb);
    }
    else if (nb < 0 || nb > 12) {
        return (0);
    }
    else {
        return (1);
    }
}
