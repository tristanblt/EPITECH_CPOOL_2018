/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_str_islower(char *str);

Test(my_str_islower, return_value_is_not_lower)
{
    cr_assert_eq(my_str_islower("abzZ"), 0);
}

Test(my_str_islower, return_value_is_lower)
{
    cr_assert_eq(my_str_islower("azer"), 1);
}