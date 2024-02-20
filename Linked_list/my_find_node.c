/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_find_node
*/

#include "./include/mylist.h"
#include "include/my.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
    linked_list_t const *tmp = begin;
    while (tmp) {
        if (!((*cmp)(tmp->data, data_ref))) {
            linked_list_t *node = NULL;
            node = create_node(tmp->data, node);
            return node;
        }
        tmp = tmp->next;
    }
    return NULL;
}