#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a linked list
 * @head: pointer to the head of the linked list
 * @n: Data of the new node
 * Return: The address of the new node; NULL if allocation fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = *head;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = new_node;
	new_node->prev = temp;
	}
	return (new_node);
}
