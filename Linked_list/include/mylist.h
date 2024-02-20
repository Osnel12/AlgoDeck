/*
** EPITECH PROJECT, 2024
** Test
** File description:
** mylist
*/

#ifndef MYLIST_H_
#define MYLIST_H_

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t ;

void my_rev_list (linked_list_t **begin);
int my_list_size(linked_list_t const *begin);
linked_list_t *create_node(const char *data, linked_list_t *list);
linked_list_t *my_params_to_list(int ac, char const **av);
void print_list(linked_list_t *list);
int my_apply_on_nodes (linked_list_t *begin, int (*f)(void *));
int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(), void const *data_ref, int (*cmp)());
linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)());
int my_delete_nodes(linked_list_t ** begin, void const *data_ref, int (*cmp)());
void my_concat_list(linked_list_t **begin1, linked_list_t *begin2);
void my_sort_list(linked_list_t **begin , int (*cmp)());
void swap_node(linked_list_t *node1, linked_list_t *node2, linked_list_t **list, int (*cmp)());

#endif /* !MYLIST_H_ */
