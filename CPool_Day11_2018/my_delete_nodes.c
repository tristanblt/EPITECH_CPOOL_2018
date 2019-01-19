/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_delete_node
*/

#include "mylist.h"
#include <stdlib.h>
#include "my.h"

int my_delete_node(linked_list_t **begin, void const *data_ref,
int (*cmp)())
{
    linked_list_t *tmp = *begin;
    linked_list_t *save;

    while (tmp != NULL) {
        if ((*cmp)(tmp->data, data_ref) == 0 && tmp != NULL) {
            save->next = tmp->next;
        }
        save = tmp;
        tmp = tmp->next;
    }
    return (0);
}