#include "main.h"


/*
 * main - The starting point for the student management program.
 * Return: return 0 if sucess else fail.
 */


int main(void)
{
	std_info *head;
	int action, id;
	char yes_no[3] = "";
	char program[3] = "";
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
				printf("Do you want to add another student record (y/n): ");
				scanf("%s", yes_no);
                   		clear_input_buffer();
			} while (strcmp(yes_no, "y") == 0 || strcmp(yes_no, "y") == 0);
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
				printf("Do you want to sort another category (y/n): ");
				scanf("%s", yes_no);
                    		clear_input_buffer();
			} while (strcmp(yes_no, "y") == 0 || strcmp(yes_no, "y") == 0);
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
				printf("do you want to update another record (y/n): ");
				scanf("%s", yes_no);
                   		 clear_input_buffer();
			} while (strcmp(yes_no, "y") == 0 || strcmp(yes_no, "y") == 0);
			break;
		case 6:
			delete_record(&head);
			break;
		case 0:
			printf("\nExiting program ...\n");
			return (0);
			break;
		default:
			printf("Invalid action selected\n");
			break;
	}
}
}
