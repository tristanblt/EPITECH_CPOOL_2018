/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** main
*/

int my_put_nbr(int nb);
void my_putchar(char c);
int eval_expr(char const *str);

int main(int ac , char ** av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}