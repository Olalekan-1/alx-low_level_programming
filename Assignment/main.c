#include "main.h"

int display_actions(void);
/**
 * display_actions - displays possible actions
 * Return: returns the action to be executed
 */

int display_actions(void)
{
	int action, c;
	char input[10];
	printf("\nHELLO MANAGER!!!");
	printf("\nWhat action would like to peform on the student record management system?");
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
	putchar(10);
	printf("choose an action: ");

	fgets(input, sizeof(input), stdin);

	if (sscanf(input, "%d", &action) != 1)
	 {
		 while ((c = getchar()) != '\n' && c != EOF)
			 continue;

		 return (-1);
	 }

	return (action);
}


/*
 * main - The starting point for the student management program.
 * Return: return 0 if sucess else fail.
 */


int main(void)
{
	std_info *head;
	int action, id;
	char yes_no[3] = "",  program[3] = "";
	head = NULL;
while (1)
{
	action = display_actions();


	switch (action)
	{
		case 1:
			do
			{
				add_record(&head);
				printf("Do you want to add anothe student record (y/n):" );
				scanf("%s", yes_no);
			} while (strcmp(yes_no, "yes") == 0);
			break;
		case 2:
			show_all_record(&head);
			break;
		case 3:
			number_in_category(&head);
			break;
		case 4:
			do
			{
				printf("Enter program to sort ((UG/PG/PT): ");
				scanf("%s", program);
				sort_category(&head, program);
				printf("Do you want to sort another category (yes/no): ");
				scanf("%s", yes_no);
			} while (strcmp(yes_no, "yes") == 0);
			break;
		case 5:
			do
			{
				printf("Enter category to update (UG/PG/PT): ");
				scanf("%s", program);
				sort_category(&head, program);
				printf("Enter Id to update (s/n): ");
				scanf("%d", &id);
				update_std_record(&head, program, id);
				printf("do you want to update another record (yes/no): ");
				scanf("%s", yes_no);
			} while (strcmp(yes_no, "yes") == 0);
			break;
		case 6:
			delete_record(&head);
			break;
		case 0:
			return (0);
			break;
		default:
			printf("Invalid action selected\n");
			break;
	}
}
}
