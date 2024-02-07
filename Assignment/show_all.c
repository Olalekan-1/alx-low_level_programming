#include "main.h"

/**
 * show_all_record shows all record in the student records
 * Return: returns the total number of student
 */

int show_all_record(std_info **head)
{
	std_info *temp;
	int count = 0;

	if (*head == NULL)
	{
		printf("Empty record\n");
	}
		return (0);

	temp = *head;
	printf("%-5s%-22s%-5s%-5s\n","s/n", "Name", "age", "program");

	while (temp != NULL)
	{
		count++;
		printf("%-5d%-22s%-5d%-5s\n", count, temp->name, temp->age, temp->program);
		temp = temp->next;
	}
	return (count);
}


