//#include "./contact.h"
//#include "./contact_list.h"
//#include "./s_linked_list.h"
#include "./UI.h"
int main() {

    char* path_to_file = ("save_list.txt");
    s_linked_list *list = list_new();

/*
    s_contact* contact = contact_new();
    contact_prompt(contact);
    list_push_back(list, contact);
*/

    user_interface(list);
}