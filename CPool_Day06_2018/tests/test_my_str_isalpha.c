/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_str_isalpha(char *str);

Test(my_str_isalpha, return_value_is_not_alpha)
{
    cr_assert_eq(my_str_isalpha("abzZ1"), 0);
}

Test(my_str_isalpha, return_value_is_alpha)
{
    cr_assert_eq(my_str_isalpha("abzZ"), 1);
}