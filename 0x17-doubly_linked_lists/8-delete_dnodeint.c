#include "lists.h"


/**
 * delete_dnodeint_at_index - To delete node at an index
 * @head: pointer to the head of the list
 * @index: the index to delete from
 * Return: 1 if success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next_node, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		next_node = *head;
		next_node->next = (*head)->next;
		*head = next_node->next;
		free(next_node);
		return (1);
	}

	temp = *head;
	while (i < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	next_node = temp->next;
	next_node->next->prev = temp;
	temp->next = temp->next->next;
	free(next_node);

	return (1);

}
