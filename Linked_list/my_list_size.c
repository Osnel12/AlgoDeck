/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_list_size
*/

#include "./include/mylist.h"
#include "include/my.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t const *tmp = begin;
    if (!tmp)
        return 0;
    return 1 + my_list_size(tmp->next);
}