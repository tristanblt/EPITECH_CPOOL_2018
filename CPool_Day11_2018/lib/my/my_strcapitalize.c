/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** up the first letter
*/

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strlowcase(char *str);

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
    char s[my_strlen(str)];

    my_strcpy(s, my_strlowcase(str));
    if (is_lowalpha(str[0])) {
        str[0]-=32;
    }
    while (i < my_strlen(str)) {
        if (!is_alphanum(s[i-1]) && is_lowalpha(s[i])) {
            str[i]-=32;
        }
        i++;
    }
    return (str);
}