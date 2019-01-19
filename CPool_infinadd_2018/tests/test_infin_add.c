/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** test_infin_add
*/

#include <criterion/criterion.h>

char *infinad(char *s1, char *s2);

Test(infin_add, test00)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test01)
{
    cr_assert_str_eq(infinad("1", "0"), "1");
}

Test(infin_add, test02)
{
    cr_assert_str_eq(infinad("0", "1"), "1");
}

Test(infin_add, test03)
{
    cr_assert_str_eq(infinad("9", "1"), "10");
}

Test(infin_add, test04)
{
    cr_assert_str_eq(infinad("1", "9"), "10");
}

Test(infin_add, test05)
{
    cr_assert_str_eq(infinad("999", "1"), "1000");
}

Test(infin_add, test06)
{
    cr_assert_str_eq(infinad("1", "999"), "1000");
}

Test(infin_add, test07)
{
    cr_assert_str_eq(infinad("-1", "-1"), "-2");
}

Test(infin_add, test08)
{
    cr_assert_str_eq(infinad("-1", "-0"), "-1");
}

Test(infin_add, test09)
{
    cr_assert_str_eq(infinad("-0", "-1"), "-1");
}

Test(infin_add, test10)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test11)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test12)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test13)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test14)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test15)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test16)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test17)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test18)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test19)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test20)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test21)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

Test(infin_add, test22)
{
    cr_assert_str_eq(infinad("1", "1"), "2");
}

