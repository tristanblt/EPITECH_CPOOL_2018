/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int	i = 0;

    while (*(str + i) != '\0') {
        i++;
    }
    return (i);
}