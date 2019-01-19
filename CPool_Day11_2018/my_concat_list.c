/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_concat_list
*/

#include "mylist.h"
#include <stdlib.h>
#include "my.h"

void add_to_list(linked_list_t *list, char *str);

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    while (begin2 != NULL) {
        add_to_list((*begin1), begin2->data);
        begin2 = begin2->next;
    }
}