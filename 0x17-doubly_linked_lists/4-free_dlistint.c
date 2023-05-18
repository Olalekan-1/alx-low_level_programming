#include "lists.h"


/**
 * free_dlistint - function to free the memory to a linked list
 * @head: pointer to the head of the list
 * Return: ...
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current;

	temp = head;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
	/*	free(current->n); */
	/*	free(current->prev); */
		free(current);
	}
}




