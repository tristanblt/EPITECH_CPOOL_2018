/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_str_isprintable(char *str);

Test(my_str_isprintable, return_value_is_not_alpha)
{
    cr_assert_eq(my_str_isprintable("ab---_____\nzZ1"), 0);
}

Test(my_str_isprintable, return_value_is_alpha)
{
    cr_assert_eq(my_str_isprintable("----____dclkjdscKJHKJh"), 1);
}