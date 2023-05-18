#include "lists.h"

/**
 * add_dnodeint - Add new node at the begiining of the list
 * @head: pointer to the head of the list
 * @n: data of the new node
 * Return: addresss of the new node;else NULL if allocation fail
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);


	new_node->n = n;

	new_node->next = head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
