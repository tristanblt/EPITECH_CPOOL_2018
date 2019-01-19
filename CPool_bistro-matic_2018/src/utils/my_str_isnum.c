/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** up a text
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    if (str[0] == '-')
        i++;
    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9'))
            return (0);
        i++;
    }
    return (1);
}