#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at positiion
 * @head: pointer to the head node
 * @index: index node to delete
 * Return: 1 if sucessfull else -1
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{	listint_t *next_node;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		next_node = *head;
		*head = (*head)->next;
		free(next_node);
		return (1);
	}

	temp = *head;

	/* traversing through node to get index position*/
	while (i < (index - 1)  && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
	return (1);
}

