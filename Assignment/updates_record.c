#include "main.h"

/**
 * update_std_record - updates the student record
 * @head: pointer to the head of the record
 * @program_type: The program pf the student to update
 * @id: The serial number of the student record to update based on the 
 * sorted category
 *
 */


std_info *update_std_record(std_info **head, char *program_type, int id)
{
	int count, i;
	std_info *temp, *current;
	char *old_name;
	char option[10];
	char name_[22];
	char pro[5];

	count = count_category(head, program_type);
	std_info *program[count];
	temp = *head;

	if (*head == NULL)
	{
		printf("No record to update\n");
		return (NULL);
	}

	i = 0;
	while (temp != NULL)
	{
		if (strcmp(temp->program, program_type) == 0)
		{
			program[i] = temp;
			i++;
		}
		temp = temp->next;
	}

	old_name = program[id - 1]->name;
	printf("%s\n", old_name);

	printf("Enter field you want to update (name/age/program):  ");
	scanf("%s", option);
	if (strcmp(option, "name") == 0)
	{
		printf("Enter the new name:  ");
		//scanf("%s", name_);
		scanf(" %[^\n]", name_);
		strcpy(program[id - 1]->name, name_);
	}
	else if (strcmp(option, "age") == 0)
	{
		printf("Enter the new age:  ");
		scanf("%d", &program[id -1]->age);
	}
	else if (strcmp(option, "program") == 0)
	{
		printf("Enter the new program_type (UG/PG/PT):  ");
		scanf("%s", pro);
		strcpy(program[id - 1]->program, pro);
	}
	else
	{
		printf("Invalid field selected, unable to update record\n");
		return (NULL);
	}

	current = *head;
	if (current->next != NULL)
	{
		while (current != NULL && strcmp(current->name, old_name) != 0)
		{
			current = current->next;
		}
	}

	printf("update successful\n");

	return (current);
}
