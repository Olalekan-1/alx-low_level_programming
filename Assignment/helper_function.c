#include "main.h"

/**
 * clear_input_buffer - clears standard input buffer
 * Return: void
 */

void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
	    continue;
}
int display_actions(void);
/**
 * display_actions - displays possible actions
 * Return: returns the action to be executed
 */

int display_actions(void)
{
	int action;
	char input[10], choice;
	printf("\nHELLO MANAGER!!!");
	printf("\nWhat action would like to peform on the student record management system?");
	printf("\nEnter 'V' or 'v' to view the available actions: ");
	scanf("%c", &choice);
	if (choice == 'V' || choice == 'v')
	{
		clear_input_buffer();
		printf("\n--------------------------------");
		printf("\n--------------------------------");
		printf("\npress 1 to add new record");
		printf("\npress 2 to to show all records");
		printf("\npress 3 to count number of record by program type");
		printf("\npress 4 to sort record");
		printf("\npress 5 to update record");
		printf("\npress 6 to delete record");
		printf("\npress 0 to exit\n");
		printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
		//putchar(10);
	}
	putchar(10);
	printf("choose an action: ");

	fgets(input, sizeof(input), stdin);

	if (sscanf(input, "%d", &action) != 1)
	 {
		clear_input_buffer();
		 return (-1);
	}
	return (action);
}

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
