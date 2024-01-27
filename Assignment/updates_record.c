#include "main.h"
/**
 * count_category - count by category the numbers in the records
 * @head: pointer to the head of the record
 * @program_type: the program type to count
 * Return: the number of count of category in the record
 *
 */

int count_category(std_info **head, char *program_type)
{
	std_info *temp;

	int count = 0;

	if (*head == NULL)
		return (0);

	temp = *head;

	while (temp != NULL)
	{
		if (strcmp(temp->program, program_type) == 0)
		{
			count++;
		}
		temp = temp->next;
	}

	return (count);
}

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
	std_info *temp, *current, *updated_record;
	char *old_name;
	char option[10];
	char name_[22];
	char pro[5];

	count = count_category(head, program_type);
	std_info *program[count];
	temp = *head;

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
		scanf("%s", name_);
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
		printf("Invalid field selected, unable to update record");
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
	// printf("%;

	return (current);
}
