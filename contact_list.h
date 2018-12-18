#ifndef PHONE_BOOK_CONTACT_LIST_H
#define PHONE_BOOK_CONTACT_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>



void contact_list_print(s_linked_list *self);
void contact_list_removed_contact(s_linked_list *self);
void contat_list_prompt_new(s_linked_list *self);
void contact_list_load(s_linked_list *self, char* file_path);
void contact_list_save(s_linked_list *self, char* path);

#endif //PHONE_BOOK_CONTACT_LIST_H
