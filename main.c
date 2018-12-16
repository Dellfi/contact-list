#include "./contact.h"
#include "contact_list.h"
#include "./s_linked_list.h"

int main() {
    s_linked_list *list = list_new();
    //contact_from_file_to_list(list);
    s_contact jon = {"Jonny", "Zp", "1322"};
    s_contact sun = {"Suny", "Lv", "3112"};
    s_contact loppy = {"loppy", "Dn", "311"};

    s_contact* contact = contact_new();

    list_push_back(list, &jon);
    list_push_back(list, &sun);
    list_push_back(list, &loppy);
    //printf("%p", &list->tail->next);
    contact_list_save();
}