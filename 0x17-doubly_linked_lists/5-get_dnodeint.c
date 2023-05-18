#include "lists.h"

/**
 * get_dnodeint_at_index - function to get node at index
 * @head: pointer to the head node
 * @index: The index to return
 * Return: The node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{	unsigned int i;
	dlistint_t *temp;

	/* if no node exist */
	if (head == NULL)
	{
		return (NULL);
	}

	i = 0;
	temp = head;
	/* traverse to the node to locate index */
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

