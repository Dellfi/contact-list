#include "./UI.h"

void print_help() {
    printf("\nTo add a contact to the beginning, press [a].\n");
    printf("To delete the first contact, press[d].\n");
    printf("For quest contact, press[q]\n");
    printf("For print list, press[p]\n");
    printf("For load list, press[l]\n");
    printf("For save list, press[s]");
    printf("For help, press[h]\n");
    printf("To exit, press[e].");
    printf("\nSelection: ");
}

void user_interface (linked_list *self) {
    print_help();

    char ch;
    while(true) {
        scanf("%c", &ch);

        switch (ch) {
            case 'a':
                contat_list_prompt_new(self);
                break;
            case 'd':
                contact_list_removed_contact(self);
                break;
            case 'q':
                contact_list_search(self, ui_prompt_string("\nEnter name for search: "));
                break;
            case 'p':
                contact_list_print(self);
                break;
            case 'l':
                contact_list_load(self, "load_list.txt");
                printf("\nList is loaded");
                break;
            case 's':
                contact_list_save(self, "save_list.txt");
                break;
            case 'h':
                print_help();
                break;
            case 'e':
                exit(1);
            default:
                printf("\nSelect the value from the presented\n");
                print_help();
        }
    }
}