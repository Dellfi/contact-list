#include "./contact.h"

char *ui_prompt_string(const char *prompt) {
    printf(prompt);
    return io_read_line(stdin);
}

char* io_read_line(FILE *file){
    char string_buffer[255] = { 0 };
    fscanf(file,"%s", &string_buffer);

    size_t str_len = strlen(string_buffer);
    char *result = (char*)malloc(str_len + 1);

    strncpy(result, string_buffer, str_len); //Func return: (The function returns a pointer to the string into which the data is copied);
    result[str_len] = 0;

    return result;
}

s_contact *contact_new(void) {
    s_contact *self = malloc(sizeof(s_contact));
    memset(self, 0, sizeof(s_contact));
    return self;
}

void contact_prompt(s_contact *self){
    self->full_name = ui_prompt_string("\nEnter user full name: ");
    self->address = ui_prompt_string("Enter user address: ");
    self->phone = ui_prompt_string("Enter user phone: ");
}

void contact_write(s_contact *self, FILE *fd) {
    fprintf(fd, "%s\n", self->full_name);
    fprintf(fd, "%s\n", self->address);
    fprintf(fd, "%s\n", self->phone);
    fprintf(fd, "\n");
}

void contact_read(s_contact *self, FILE *fd) {
    self->full_name = io_read_line(fd);
    self->address = io_read_line(fd);
    self->phone = io_read_line(fd);
    fscanf(fd, "\n");
}

void contact_print(s_contact *self) {
    printf("{name: %s, address: %s, phone: %s}",
            self->full_name,
            self->address,
            self->phone);
}


