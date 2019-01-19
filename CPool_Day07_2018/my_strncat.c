/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    int is = my_strlen(dest);
    int total = my_strlen(src) + my_strlen(dest);

    while (i < total && i < nb + is) {
        dest[i] = src[i - is];
        i++;
    }
    return (dest);
}