#ifndef PHONE_BOOK_S_LINKED_LIST_H
#define PHONE_BOOK_S_LINKED_LIST_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "contact.h"

typedef struct _s_link_node {
    void *data;
    struct _s_link_node *next;
    struct _s_link_node *prev;
} s_node;

typedef struct{
    s_node *head;
    s_node *tail;
    unsigned int size;
} s_linked_list;

s_linked_list *list_new(void);
void *list_push_back(s_linked_list *self, void* data);
void *list_push_front(s_linked_list *self, void* data);
void *list_pop_back(s_linked_list *self);
void *list_pop_front(s_linked_list *self);

#endif //PHONE_BOOK_S_LINKED_LIST_H
