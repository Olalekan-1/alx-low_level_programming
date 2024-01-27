#include "main.h"

/**
 * sort_category - sorts each category of program
 * in the student records by program type.
 * @head: pointer to the head of the list.
 * @program_type: The program type to sort.
 * Return: returns the total number of student
 * in the category
 */

int sort_category(std_info **head, char program_type[5])
{
	std_info *temp;
	int count = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	printf("%-5s%-22s%-5s%-5s\n", "s/n", "Name", "age", "program");

	while (temp != NULL)
	{
		if (strcmp(temp->program, program_type) == 0)
		{
			count++;
			printf("%-5d%-22s%-5d%-5s\n", count, temp->name, temp->age, temp->program);
		}
		temp = temp->next;
	}
	return (count);
}


