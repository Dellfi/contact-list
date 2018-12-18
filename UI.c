#include "./UI.h"

void print_help() {
    printf("\nTo add a contact to the beginning, press [a].\n");
    printf("To delete the first contact, press[d].\n");
    printf("For search contact, press[s]\n");
    printf("For load list, press[l]\n");
    printf("For help, press[h]\n");
    printf("To exit, press[q].");
    printf("\nSelection: ");
}

void user_interface (s_linked_list *list) {
    print_help();

    char ch;
    while(true) {
        scanf("%c", &ch);

        switch (ch) {
            case 'a':
                contact_list_request_push(list);
                break;
            case 'd':
                removed_contact(list);
                break;
            case 's':
                //Need to work on a search
                printf("\nEnter last name for search: ");
                return;
            case 'l':
                contact_list_load(list);
                printf("\nList is loaded");
                break;
            case 'h':
                print_help();
                break;
            case 'q':
                exit(1);
            default:
                printf("\nSelect the value from the presented\n");
                print_help();
        }
    }
}