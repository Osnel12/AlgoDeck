/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_apply_on_matching_nodes
*/

#include "./include/mylist.h"
#include "include/my.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(), void const *data_ref, int (*cmp)())
{
    linked_list_t const *tmp = begin;
    while (tmp) {
        if (!((*cmp)(tmp->data, data_ref)))
            (*f)(tmp->data);
        tmp = tmp->next;
    }
    return 0;
}