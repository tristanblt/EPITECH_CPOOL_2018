/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** verif_str
*/

void change_minus(char *str)
{
    int i_save = 0;
    int serie = 0;
    int charge = 1;

    for (int i = 0; str[i]; i++) {
        if ((str[i] == '-' || str[i] == '+') && !serie) {
            serie = 1;
            i_save = i;
        }
        else if (serie && !(str[i] == '-' || str[i] == '+' || str[i] == '(')) {
            str[i_save] = charge == 1 ? '+': '-';
            serie = 0;
            charge = 1;
        }
        if (str[i] == '-' && serie)
            charge *= -1;
        if ((str[i] == '-' || str[i] == '+') && serie)
            str[i] = 10;
    }
}

int verif_minus_and_par(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == '(' && str[i-1] >= '0' && str[i-1] <= '9')
            return (0);
        else if (str[i] == ')' && str[i+1] >= '0' && str[i+1] <= '9')
            return (0);
    change_minus(str);
    return (1);
}

int verif_str(char *str)
{
    int par = 0;
    int i;

    for (i = 0; str[i]; i++) {
        if (str[i] == '(')
            par++;
        else if (str[i] == ')')
            par--;
    }
    if (!par && i > 0 && verif_minus_and_par(str))
        return (1);
    else
        return (0);
}