/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_revstr
*/

int my_strlen(char *str);

void my_revstrdouble(char *str, char *str2)
{
    char c;
    int j = my_strlen(str) - 1;
    int k = my_strlen(str2) - 1;

    for (int i = 0; i < j; i++) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        j--;
    }
    for (int i = 0; i < k; i++) {
        c = str2[i];
        str2[i] = str2[k];
        str2[k] = c;
        k--;
    }
}

char *my_revstrzero(char *str)
{
    char c;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    i = 0;
    while (str[i] == '0' && str[i + 1] != '\0') {
        str[i] = 1;
        i++;
    }
    return (str);
}