/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** power a number in it
*/

int my_compute_power_it(int nb, int p)
{
    int i = 0;
    int res = 1;

    if (p > 0) {
    	while (i < p) {
            res = nb * res;
            i++;
        }
        return (res);
    }
    else if (p == 0) {
        return (1);
    }
    else {
        return (0);
    }
}
