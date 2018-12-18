#ifndef PHONE_BOOK_CONTACT_LIST_H
#define PHONE_BOOK_CONTACT_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

void contact_list_print(s_linked_list *self);
void removed_contact(s_linked_list *self);
void contat_list_prompt_new(s_linked_list *self);
void contact_list_load();
void contact_list_save();

#endif //PHONE_BOOK_CONTACT_LIST_H
