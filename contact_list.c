#include "./linked_list.h"
#include "./contact_list.h"
#include "./contact.h"

void contact_list_load(linked_list *self, char* file_path) {
    FILE *file = fopen(file_path, "r");

    while(1) {
        s_contact *contact = contact_new();
        contact_read(contact, file);
        list_push_back(self, contact);
        if(feof(file) != 0){
            break;
        }
    }

    fclose(file);
}

void contact_list_save(linked_list *self, char* path) {
    FILE *file = fopen(path, "w");

    s_node *new_node = self->head;

    while(new_node != NULL) {
        contact_write(new_node->data, file);
        new_node = new_node->next;
    }

    fclose(file);
}

void contat_list_prompt_new(linked_list *self) {
    s_contact* contact = contact_new();
    contact_prompt(contact);
    list_push_back(self, contact);
}

void contact_list_removed_contact(linked_list *self) {
    s_contact* removed_node = list_pop_back(self);
    contact_remove(removed_node);
}

void contact_list_print(linked_list *self) {
    if(self->head == NULL) {
        printf("\nList empty.\n");
        return;
    }
    s_node* temp_node = self->head;

    while(temp_node != NULL) {
        contact_print(temp_node->data);
        temp_node = temp_node->next;
    }
}

void contact_list_search(linked_list *self, char *ref) {
    if(self->head == NULL) {
        printf("\nList empty.\n");
        return;
    }

    s_node* temp_node = self->head;
    while(temp_node != NULL) {
        s_contact* current_node = temp_node->data;
        if(strcmp(current_node->full_name, ref) == 0) {
             contact_print(temp_node->data);
         }
        current_node = temp_node->data;
        temp_node = temp_node->next;
    }

}


