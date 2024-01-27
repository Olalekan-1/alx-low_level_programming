#include "main.h"

/**
 * number_in_category - get the total of category in record
 * @head: pointer to the head of the records
 * Return: The total number of category in the student records
 */

int number_in_category(std_info **head)
{
	std_info *temp;
	char *category;
	char program_type[3];

	int count = 0;
	int total = 0;

	if (*head == NULL)
		return (0);

	temp = *head;

	printf("Enter the category you want to count (UG/PG/PT): ");
	scanf("%s", program_type);

	while (temp != NULL)
	{
		if (strcmp(temp->program, program_type) == 0)
		{
			count++;
		}
		total++;
		temp = temp->next;
	}
	if (strcmp(program_type, "UG") == 0)
		category = "Undergraduate";
	else if (strcmp(program_type, "PG") == 0)
		category = "Postgraduate";
	else if (strcmp(program_type, "PT") == 0)
		category = "Part-time";
	else
		category = "Unknown";

	printf("The total number of %s in the students records is %d / %d\n",
			category, count, total);

	return (count);
}
