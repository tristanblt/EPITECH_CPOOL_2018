/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it.c
** File description:
** calcul factorial without recursive
*/

int my_compute_factorial_it(int nb)
{
    int n = 1;
    int result = 1;

    if (nb < 0 || nb > 12) {
        return (0);
    }
    else {
        while (n <= nb) {
            result *= n;
            n++;
        }
    }
    return (result);
}
