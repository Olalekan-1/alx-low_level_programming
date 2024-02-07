#include "main.h"

/**
 * delete_record - deletes a record from the students records
 * @head: pointer to the head of the records
 * Return: 0 for sucess else fail
 */

int delete_record(std_info **head)
{
	char name[23];
	std_info *temp, *next_node, *del;

	temp = *head;

	if (*head == NULL)
	{
		printf("\nEmpty record\n");
		return (99);
	}

	printf("Enter the student name you want to delete: ");
	scanf(" %[^\n]", name);
	clear_input_buffer();

	if (strcmp((*head)->name, name) == 0)
	{
		free(*head);
		printf("%s record has been deleted\n", name);
		return (0);
	}
 

	while (temp->next != NULL)
	{
		if (strcmp(temp->next->name, name) == 0)
		{
			clear_input_buffer();
			del = temp->next;
			next_node = temp->next->next;
			temp->next = next_node;
			free(del);
			printf("%s record has been deleted\n", name);
			return (0);
		}
		temp = temp->next;
	}

	printf("\nstudent record with the name %s not found, "
		"please enter correct name.\n"
		"kindly check record for correct name\n", name);
	putchar(10);
	return (99);
}
