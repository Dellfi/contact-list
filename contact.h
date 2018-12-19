#ifndef PHONE_BOOK_CONTACT_H
#define PHONE_BOOK_CONTACT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "./linked_list.h"

typedef struct
{
    char *full_name;
    char *address;
    char *phone;
} s_contact;

char *ui_prompt_string(const char *prompt);
char* io_read_line(FILE *file);

void contact_write(s_contact *self, FILE *fd);
void contact_read(s_contact *self, FILE *fd);
void contact_prompt(s_contact *self);
void contact_print(s_contact *self);
void contact_remove(s_contact *self);
s_contact *contact_new();

#endif //PHONE_BOOK_CONTACT_H
