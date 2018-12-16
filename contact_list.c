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

void contact_list_save(FILE* path, s_linked_list *list, s_contact* self) {
    s_node *temp = list->head;
    while(temp != NULL) {;
        contact_write(self, path);
        temp = temp->next;
    }
    fclose(path);
}