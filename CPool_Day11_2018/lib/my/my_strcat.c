/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int is = my_strlen(dest);
    int total = my_strlen(src) + my_strlen(dest);

    while (i < total) {
        dest[i] = src[i - is];
        i++;
    }
    return (dest);
}