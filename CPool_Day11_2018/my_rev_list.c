/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_rev_list
*/

#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *list = *begin;
    linked_list_t *reverse = NULL;
    linked_list_t *temp = NULL;

    while (list != NULL) {
        temp = list->next;
        list->next = reverse;
        reverse = list;
        list = temp;
    }
    *(begin) = reverse;
}