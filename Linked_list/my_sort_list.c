/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_sort_list
*/

#include "include/my.h"
#include "include/mylist.h"

int is_sorted(linked_list_t *list, int (*cmp)())
{
    linked_list_t *tmp = list;
    while (tmp->next)
    {
        if ((*cmp)(tmp->data, tmp->next->data))
            return 1;
    }
    return 0;
}

void swap_node(linked_list_t *node1, linked_list_t *node2, linked_list_t **list, int (*cmp)())
{
    linked_list_t *head = *list;
    linked_list_t *prev = NULL;
    if (node1 == head) {
        linked_list_t *tmp = node2->next;
        node2->next = *list;
        (*list)->next = tmp;
        *list = node2;
        return;
    } else if (node2 == head) {
        swap_node(node2, node1, list, (cmp));
        return;
    }
    while ((*cmp)(head->data, node1->data))
    {
        prev = head;
        head = head->next;
    }
    linked_list_t *tmp = node2->next;
    prev->next = node2;
    node2->next = node1;
    node1->next = tmp;
}
