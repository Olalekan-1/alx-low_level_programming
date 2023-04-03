#include "lists.h"

/**
 * pop_listint - function to the delete the head node
 * @head: pointer to the head
 * Return: the data of the headnode
 */

int pop_listint(listint_t **head)
{	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);


	return (n);
}
