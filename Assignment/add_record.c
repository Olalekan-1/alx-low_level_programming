#include "main.h"


/**
 * add_record - adds record for new student containing
 * the student information
 * @head: pointer to the head of the list of record
 * Return: The record added to the list if succes else
 * return NULL
 */

std_info *add_record(std_info **head)
{
	std_info *new_record, *temp;

	new_record = (std_info *)malloc(sizeof(std_info));

	if (new_record == NULL)
		return (NULL);

	printf("Enter student name: ");
	scanf(" %[^\n]", new_record->name);


	printf("Enter student age: ");
	scanf("%d", &new_record->age);

	printf("Enter program (UG/PG/PT): ");
	scanf("%s", new_record->program);

	if (*head == NULL)
	{
		*head = new_record;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_record;
	}
	return (new_record);

}
