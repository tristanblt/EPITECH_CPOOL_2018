/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, return_value_capitalize)
{
    cr_assert_str_eq(my_strcapitalize(strdup("abzZ")), "AbzZ");
}