cmake_minimum_required(VERSION 3.13)
project(Phone_book C)

set(CMAKE_C_STANDARD 99)

add_executable(Phone_book main.c contact.c contact.h s_linked_list.c s_linked_list.h contact_list.c contact_list.h UI.c UI.h)