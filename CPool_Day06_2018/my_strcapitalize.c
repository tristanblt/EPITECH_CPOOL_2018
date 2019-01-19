/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** up the first letter
*/

#include "my_strlen2.c"
#include "my_strlowcase.c"
#include "my_strcpy.c"

int my_strlen2(char const *str);
char *my_strlowcase(char *str);
char *my_strcpy(char *dest, char const *src);

int is_alphanum(char c)
{
    if ((c >= 'A' && c<= 'Z')||(c >= 'a' && c<= 'z')||(c>= '0' && c<= '9')) {
        return (1);
    }
    return (0);
}

int is_lowalpha(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (1);
    }
    return (0);
}

char *my_strcapitalize(char *str)
{
    int i = 1;
    char s[my_strlen2(str)];

    my_strcpy(s, my_strlowcase(str));
    if (is_lowalpha(str[0])) {
        str[0]-=32;
    }
    while (i < my_strlen2(str)) {
        if (!is_alphanum(s[i-1]) && is_lowalpha(s[i])) {
            str[i]-=32;
        }
        i++;
    }
    return (str);
}