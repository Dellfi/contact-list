#include "./s_linked_list.h"
#include "./contact_list.h"
#include "./contact.h"

void contact_list_load(s_linked_list *self, char* file_path) {
    FILE *file = fopen(file_path, "r");

    while(1) {
        s_contact *contact = contact_new();
        contact_read(contact, file);
        list_push_back(self, contact);
        contact_print(self->head->data);
        if(feof(file) != 0){
            break;
        }
    }

    fclose(file);
}

void contact_list_save(s_linked_list *self, char* path) {
    FILE *file = fopen(path, "w");

    s_node *new_node = self->head;

    while(new_node != NULL) {
        contact_write(new_node->data, file);
        new_node = new_node->next;
    }

    fclose(file);
}

void contat_list_prompt_new(s_linked_list *self) {
    s_contact* contact = contact_new();
    contact_prompt(contact);
    list_push_back(self, contact);
}

void contact_list_removed_contact(s_linked_list *self) {
    s_contact* removed_node = list_pop_back(self);
    contact_remove(removed_node);
}

void contact_list_print(s_linked_list *self) {
    if(self->size == 0) {
        printf("\nList empty.\n");
        return;
    }
    s_node* temp_node = self->head;

    while(temp_node != NULL) {
        contact_print(temp_node->data);
        temp_node = temp_node->next;
    }
}