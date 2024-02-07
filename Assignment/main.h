#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct std_info {
    char name[23];
    int age;
    char program[7];
    struct std_info *next;
} std_info;

std_info *add_record(std_info **head);
int sort_category(std_info **head, char *program_type);
int number_in_category(std_info **head);
int delete_record(std_info **head);
std_info *update_std_record(std_info **head, char *program_type, int id);
int count_category(std_info **head, char *program_type);
size_t print_listint(std_info **h);
int show_all_record(std_info **head);
void clear_input_buffer(void);
int display_actions(void);


#endif 
