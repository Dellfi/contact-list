#include "./UI.h"

void user_interface (s_linked_list *list) {
    printf("\nTo add a contact to the beginning, press [1].\n");
    printf("To add contact in end, press[2].\n");
    printf("To delete the first contact, press[3].\n");
    printf("To delete the last contact, press[4].\n");
    printf("To exit, press[5].");
    printf("\nSelection: ");

    char ch;
    scanf("%c", &ch);
    while(true) {

    s_contact* contact = contact_new();

        switch (ch) {
            case '1':
                contact_prompt(contact);
                list_push_front(list, contact);
                break;
            case '2':
                contact_prompt(contact);
                list_push_back(list, contact);
                break;
            case '3':
                list_pop_front(list);
                break;
            case '4':
                list_pop_back(list);
                break;
            case '5':
                exit(1);
            default:
                printf("\nSelect the value from the presented\n");
        }
    }
}