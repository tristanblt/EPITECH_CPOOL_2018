/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** test_infin_add
*/

#include <criterion/criterion.h>
#include "bistro_matic.h"

Test(infinad, add_simple_case_0)
{
    char s1[2] = "0";
    char s2[2] = "1";

    cr_assert_str_eq(infinad(s1, s2), "1");
}

Test(infinad, add_simple_case_1)
{
    char s1[2] = "1";
    char s2[2] = "0";

    cr_assert_str_eq(infinad(s1, s2), "1");
}

Test(infinad, add_simple_case_2)
{
    char s1[2] = "1";
    char s2[2] = "1";

    cr_assert_str_eq(infinad(s1, s2), "2");
}

Test(infinad, add_simple_case_3)
{
    char s1[2] = "2";
    char s2[2] = "1";

    cr_assert_str_eq(infinad(s1, s2), "3");
}

Test(infinad, add_simple_case_4)
{
    char s1[2] = "1";
    char s2[2] = "2";

    cr_assert_str_eq(infinad(s1, s2), "3");
}

Test(infinad, add_simple_case_5)
{
    char s1[2] = "6";
    char s2[2] = "4";

    cr_assert_str_eq(infinad(s1, s2), "10");
}

Test(infinad, add_simple_case_6)
{
    char s1[2] = "4";
    char s2[2] = "6";

    cr_assert_str_eq(infinad(s1, s2), "10");
}

Test(infinad, add_complex_case_0)
{
    char s1[4] = "112";
    char s2[5] = "1428";

    cr_assert_str_eq(infinad(s1, s2), "1540");
}

Test(infinad, add_complex_case_1)
{
    char s1[33] = "456874";
    char s2[25] = "4568751";

    cr_assert_str_eq(infinad(s1, s2), "5025625");
}

Test(infinad, add_complex_case_2)
{
    char s1[33] = "10000000";
    char s2[25] = "3784";

    cr_assert_str_eq(infinad(s1, s2), "10003784");
}

Test(infinad, sub_simple_case_0)
{
    char s1[2] = "0";
    char s2[3] = "-1";

    cr_assert_str_eq(infinad(s1, s2), "-1");
}

Test(infinad, sub_simple_case_1)
{
    char s1[2] = "1";
    char s2[3] = "-0";

    cr_assert_str_eq(infinad(s1, s2), "1");
}

Test(infinad, sub_simple_case_2)
{
    char s1[3] = "-1";
    char s2[2] = "1";

    cr_assert_str_eq(infinad(s1, s2), "0");
}

Test(infinad, sub_simple_case_3)
{
    char s1[2] = "2";
    char s2[3] = "-1";

    cr_assert_str_eq(infinad(s1, s2), "1");
}

Test(infinad, sub_simple_case_4)
{
    char s1[2] = "1";
    char s2[3] = "-2";

    cr_assert_str_eq(infinad(s1, s2), "-1");
}

Test(infinad, sub_simple_case_5)
{
    char s1[2] = "6";
    char s2[3] = "-4";

    cr_assert_str_eq(infinad(s1, s2), "2");
}

Test(infinad, sub_simple_case_6)
{
    char s1[2] = "6";
    char s2[4] = "-10";

    cr_assert_str_eq(infinad(s1, s2), "-4");
}

Test(infinad, sub_complex_case_0)
{
    char s1[5] = "-112";
    char s2[5] = "1428";

    cr_assert_str_eq(infinad(s1, s2), "1316");
}

Test(infinad, sub_complex_case_1)
{
    char s1[8] = "-456874";
    char s2[8] = "4568751";

    cr_assert_str_eq(infinad(s1, s2), "4111877");
}

Test(infinad, sub_complex_case_2)
{
    char s1[9] = "10000000";
    char s2[6] = "-3784";

    cr_assert_str_eq(infinad(s1, s2), "9996216");
}

Test(infinad, sub_complex_case_3)
{
    char s1[10] = "-10000000";
    char s2[6] = "-3784";

    cr_assert_str_eq(infinad(s1, s2), "-10003784");
}

Test(infin_mul, mul_simple_case_1)
{
    char s1[3] = "10";
    char s2[2] = "2";

    cr_assert_str_eq(infin_mul(s1, s2), "20");
}

Test(infin_mul, mul_simple_case_2)
{
    char s1[3] = "20";
    char s2[3] = "-3";

    cr_assert_str_eq(infin_mul(s1, s2), "-60");
}

Test(infin_mul, mul_simple_case_3)
{
    char s1[4] = "-20";
    char s2[2] = "3";

    cr_assert_str_eq(infin_mul(s1, s2), "-60");
}

Test(infin_mul, mul_complex_case_1)
{
    char s1[11] = "1234567890";
    char s2[11] = "1234567890";

    cr_assert_str_eq(infin_mul(s1, s2), "1524157875019052100");
}

Test(infin_mul, mul_complex_case_2)
{
    char s1[11] = "1234567890";
    char s2[14] = "-232323232323";

    cr_assert_str_eq(infin_mul(s1, s2), "-286818802726985908470");
}

Test(infin_mul, mul_complex_case_3)
{
    char s1[12] = "-1234567890";
    char s2[14] = "-232323232323";

    cr_assert_str_eq(infin_mul(s1, s2), "286818802726985908470");
}

Test(infin_div, div_simple_case_1)
{
    char s1[3] = "10";
    char s2[2] = "2";

    cr_assert_str_eq(infin_div(s1, s2), "5");
}

Test(infin_div, div_simple_case_2)
{
    char s1[3] = "10";
    char s2[2] = "3";

    cr_assert_str_eq(infin_div(s1, s2), "3");
}

Test(infin_div, div_simple_case_3)
{
    char s1[3] = "12";
    char s2[3] = "-4";

    cr_assert_str_eq(infin_div(s1, s2), "-3");
}

Test(infin_div, divcomplex_case_1)
{
    char s1[11] = "1212121212";
    char s2[2] = "5";

    cr_assert_str_eq(infin_div(s1, s2), "242424242");
}

Test(infin_div, div_complex_case_2)
{
    char s1[17] = "-345345345345345";
    char s2[11] = "123456789";

    cr_assert_str_eq(infin_div(s1, s2), "-2797297");
}

Test(infin_mod, mod_simple_case_2)
{
    char s1[3] = "9";
    char s2[2] = "3";

    cr_assert_str_eq(infin_mod(s1, s2), "0");
}

Test(infin_mod, mod_complex_case_1)
{
    char s1[11] = "1357986421";
    char s2[5] = "1234";

    cr_assert_str_eq(infin_mod(s1, s2), "271");
}

Test(infin_mod, mod_complex_case_2)
{
    char s1[10] = "123456312";
    char s2[2] = "3";

    cr_assert_str_eq(infin_mod(s1, s2), "0");
}