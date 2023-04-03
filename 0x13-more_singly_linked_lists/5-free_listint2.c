#include "lists.h"

/**
 * free_listint2 - function that frees a singly list data structure
 * @head: pointer to the head
 * Return: void..
 */

void free_listint2(listint_t **head)
{	listint_t *temp;

	/* loop through nodes to free each node */
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/* setting the head to Null */
	*head = NULL;
}

