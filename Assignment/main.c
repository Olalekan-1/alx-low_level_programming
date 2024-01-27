#include "main.h"


int display_actions(void);
int display_actions(void)
{
	int action;
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
	scanf("%d", &action);

	return (action);
}

int main(void)
{
	std_info *head;
	int action, id;
	char yes_no[3], program[3];
while(1)
{
	action = display_actions();
	if (action == 1)
	{
		do
		{
			add_record(&head);
			printf("Do you want to add anothe student record (y/n):" );
			scanf("%s", yes_no);
		} while (strcmp(yes_no, "yes") == 0);
	}
	if (action == 2)
		show_all_record(&head);
	if (action == 3)
		number_in_category(&head);
	if (action == 4)
	{
		do
		{
		printf("Enter program to sort ((UG/PG/PT): ");
		scanf("%s", program);
		sort_category(&head, program);
		printf("Do you want to sort another category (yes/no): ");
		scanf("%s", yes_no);
		} while (strcmp(yes_no, "yes") == 0);
	}
	if (action == 5)
	{
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
	}
	if (action == 6)
		delete_record(&head);
}
	return (0);
}
