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

	printf("Enter the student name you want to delete: ");
	scanf(" %[^\n]", name);

	if (strcmp((*head)->name, name) == 0)
	{
		free(*head);
		printf("%s record has been deleted", name);
		return (0);
	}

	while (temp->next != NULL)
	{
		if (strcmp(temp->next->name, name) == 0)
		{
			del = temp->next;
			next_node = temp->next->next;
			temp->next = next_node;
			free(del);
			printf("%s record has been deleted", name);
			return (0);
		}
		temp = temp->next;
	}
	printf("student record with the name %s not found, \
			please enter correct name.\n\
			kindly check record for correct name\n", name);
	return (99);
}
