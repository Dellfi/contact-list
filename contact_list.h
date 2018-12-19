#ifndef PHONE_BOOK_CONTACT_LIST_H
#define PHONE_BOOK_CONTACT_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

void contact_list_load(linked_list *self, char* file_path);
void contact_list_save(linked_list *self, char* path);
void contact_list_removed_contact(linked_list *self);
void contat_list_prompt_new(linked_list *self);
void contact_list_search(linked_list *self, char *ref);
void contact_list_print(linked_list *self);

#endif //PHONE_BOOK_CONTACT_LIST_H
