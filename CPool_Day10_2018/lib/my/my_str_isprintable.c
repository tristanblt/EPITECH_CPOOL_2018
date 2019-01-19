/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** is printable text
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < ' ' || str[i] > '~')
            return (0);
        i++;
    }
    return (1);
}