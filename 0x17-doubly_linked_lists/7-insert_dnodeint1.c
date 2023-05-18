#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at a particular index
 * @h: pointer to the head of the list
 * @idx: The index to add node
 * @d: Data of node to be addded
 * Return: The addres of the node ; else NULL if allocation
 * or node cannot inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i = 0;

	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	temp = *h;
	while (temp != NULL)
	{
	/*	pre = temp->prev; */
		temp = temp->next;
		if (i == idx)
		{
			break;
		}
		i++;
	}

	new_node->prev = temp;
	new_node->next = temp;
	temp->next->prev = new_node;
/*	pre->next = new_node;*/
	temp->next = new_node;
	if (temp != NULL)
		temp->prev = new_node;

	return (new_node);
}
