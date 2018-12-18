#include "./contact.h"
#include "./s_linked_list.h"

s_linked_list *list_new(void){
    s_linked_list *list = malloc(sizeof(s_linked_list));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return list;
}

void *list_push_back(s_linked_list *self, void* data) {
    s_node *new_node = malloc(sizeof(s_node));

    self->size += 1;

    new_node->data = data;
    new_node->next = NULL;
    // Empty list
    if (self->head == NULL) {
        self->head = new_node;
        self->tail = new_node;
        return NULL;
    }
    self->tail->next = new_node;
    self->tail = new_node;

}

void *list_push_front(s_linked_list *self, void *data) {
    s_node *new_node = malloc(sizeof(s_node));

    self->size += 1;

    new_node->data = data;
    if (self->head == NULL) {
        self->head = self->tail = new_node;
    }
    contact_print(new_node->data);
    new_node->next = self->head;
    self->head = new_node;
}

void *list_pop_back(s_linked_list *self) {
    if (self->tail == NULL) {
        return NULL;
    }

    self->size -= 1;

    // One element
    if (self->head == self->tail) {
        void *ref = self->head->data;
        free(self->head);
        self->head = self->tail = NULL;
        return ref;
    }

    s_node *current_node = self->head;

    while(current_node->next != self->tail) {
        current_node = current_node->next;
    }
    void *ref = current_node->next->data;

    free(current_node->next);
    self->tail = current_node;
    current_node->next = NULL;
    return ref;
}

void *list_pop_front(s_linked_list *self) {
    if (self->head == NULL) {
        return NULL;
    }
    printf("\nContact deleted.\n");
    self->size -= 1;

    s_node *current_node = self->head;
    self->head = current_node->next;
    void *ref = current_node->data;
    free(current_node);
    if (self->head == NULL) {
        self->tail = NULL;
    }

    return ref;
}