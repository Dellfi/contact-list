#ifndef PHONE_BOOK_UI_H
#define PHONE_BOOK_UI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./s_linked_list.h"
#include "./contact_list.h"
#include "./contact.h"

//char* path = ("save_list.txt");
//char* file_path = ("load_list.txt");

void user_interface (s_linked_list *list);
void print_help();

#endif
