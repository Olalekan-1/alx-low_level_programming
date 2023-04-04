#include "lists.h"

/**
 * insert_nodeint_at_index - function to add new node
 * at a specific index
 * @head: pointer to the head
 * @n: data to new node
 * @idx: The index to add new node
 * Return: The new node at index position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{	listint_t *new_node;
	listint_t *temp;
	unsigned int i = 0;

	temp = *head;
	/* Allocate memory to the new node */
	new_node = malloc(sizeof(listint_t));

	/* Handling memory allocation error */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* assigned data to the new_node*/
	new_node->n = n;


	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse through node to locate index */
	for (i = 0; i < (idx - 1) && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
