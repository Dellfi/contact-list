#include "./UI.h"

int main() {
    char* path_to_file_save_list = ("save_list.txt");
    char* path_to_file_load_list = ("load_list.txt");
    s_linked_list *list = list_new();

/*
    s_contact* contact = contact_new();
    contact_prompt(contact);
    list_push_back(list, contact);
*/

    user_interface(list);
    return 0;
}