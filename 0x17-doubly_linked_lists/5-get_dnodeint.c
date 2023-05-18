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
	if (index == 0)
		return (head);
	i = 0;
	temp = head;
	/* traverse to the node to locate index */
	while (temp != NULL)
	{
		if (index == i)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}

