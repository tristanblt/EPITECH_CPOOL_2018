/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** number prime
*/

int my_is_prime(int nb)
{
    int i = 2;
    int is_prime = 1;

    if (nb < 0) {
        nb *= -1;
    }
    while (i < nb) {
        if (nb % i == 0) {
            is_prime = 0;
        }
        i++;
    }
    if (nb == 0 || nb == 1){
        is_prime = 0;
    }
    return (is_prime);
}
