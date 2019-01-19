/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** Find the next prime
*/

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (nb == 1 || nb == 0) {
        return (0);
    }
    if (my_is_prime(nb) == 1) {
        return (nb);
    }
    else {
        while (my_is_prime(i) != 1) {
            i++;
        }
        return (i);
    }
}