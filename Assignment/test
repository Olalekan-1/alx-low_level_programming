#include "main.h"

int main(void)
{
	std_info *example, *ex, *ex2;
	std_info *head;
	char *pg = "PG";
	example = add_record(&head);
	add_record(&head);
	printf("%s\n", example->name);
	sort_category(&head, pg);
	number_in_category(&head, pg);

	ex = update_std_record(&head, pg, 1);
	ex2 = update_std_record(&head, pg, 2);

	//printf("%s\n", ex->name);
	return (0);
}
