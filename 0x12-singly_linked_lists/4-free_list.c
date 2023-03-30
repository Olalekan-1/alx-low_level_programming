#include "lists.h"
#include <stdlib.h>

/**
* free_list - function that frees list
* @head: head of the list
* Return: void
*/

void free_list(list_t *head)
{	list_t *temp;
	list_t *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}

}
