#include "./s_linked_list.h"
#include "./contact_list.h"
#include "./contact.h"

void contact_from_file_to_list(s_linked_list *list) {

    FILE *file = fopen("test.txt", "r");

    s_contact *contact = contact_new();
    contact_read(contact, file);
    list_push_back(list,contact);
    //contact_print(list->head->data);
    fclose(file);

}

void contact_list_load() {

}

void contact_list_save(char* path_to_file, s_linked_list *list) {
    FILE *file = fopen(path_to_file, "w");
    s_node *new_node = list->head;
    while(new_node != NULL) {
        contact_write(new_node->data, file);
        new_node = new_node->next;
    }
    fclose(file);
}