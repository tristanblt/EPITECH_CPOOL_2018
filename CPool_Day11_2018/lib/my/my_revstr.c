/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** dupli strings to n
*/

char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);


char *my_revstr(char *str)
{
    int i = 0;
    char str2[my_strlen(str)];

    my_strcpy(str2, str);
    while (str[i] != '\0') {
        str[i] = str2[my_strlen(str) - 1 - i];
        i++;
    }
    str[i] = '\0';
    return (str);
}