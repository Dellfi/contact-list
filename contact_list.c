#include "./s_linked_list.h"
#include "./contact_list.h"
#include "./contact.h"

void contact_list_load(char* path_to_file_load_list, s_linked_list *self) {
    FILE *file = fopen(path_to_file_load_list, "r");

    s_contact *contact = contact_new();

    while(1) {
        contact_read(contact, file);
        list_push_back(self, contact);
        contact_print(self->head->data);
        if(feof(file) != 0){
            break;
        }
    }

    fclose(file);
}

void contact_list_save(char* path_to_file_save_list, s_linked_list *self) {
    FILE *file = fopen(path_to_file_save_list, "w");

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
    contact_free(removed_node);
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