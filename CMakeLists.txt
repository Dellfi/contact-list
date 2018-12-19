cmake_minimum_required(VERSION 3.13)
project(Phone_book C)

set(CMAKE_C_STANDARD 99)

add_executable(Phone_book main.c contact.c contact.h linked_list.c linked_list.h contact_list.c contact_list.h UI.c UI.h)