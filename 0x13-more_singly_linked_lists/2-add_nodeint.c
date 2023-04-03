#include "lists.h"

/**
* add_nodeint - To add new node at the beginning of node
* @head: pointer to the head of the node
* @n: The new data to be added
* Return: The new- node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{	listint_t *new_node;

	/* Allocate memory for the new_node to be created*/

	new_node = (listint_t *) malloc(sizeof(listint_t));

	/* To Handle memory allocation failure */

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
		return (NULL);

	/* insert the value for the newnode */

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
