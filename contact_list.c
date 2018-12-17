#include "./s_linked_list.h"
#include "./contact_list.h"
#include "./contact.h"

void contact_list_load(s_linked_list *self) {
    FILE *file = fopen("test.txt", "r");

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

void contact_list_save(char* path_to_file, s_linked_list *self) {
    FILE *file = fopen(path_to_file, "w");

    s_node *new_node = self->head;

    while(new_node != NULL) {
        contact_write(new_node->data, file);
        new_node = new_node->next;
    }

    fclose(file);
}