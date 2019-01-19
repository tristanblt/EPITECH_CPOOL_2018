/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_str_isupper(char *str);

Test(my_str_isupper, return_value_is_not_upper)
{
    cr_assert_eq(my_str_isupper("AYTUsss"), 0);
}

Test(my_str_isupper, return_value_is_upper)
{
    cr_assert_eq(my_str_isupper("AIUYE"), 1);
}