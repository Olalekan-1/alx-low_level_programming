#include "lists.h"

/**
 * add_nodeint_end - To add new node at the end of a node
 * @head: Pointer to the head node
 * @n: The value to be assigned
 * Return: the node at the end of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{	listint_t *temp;
	listint_t *new_node;

	temp = *head;

	/* alocate memory for the new node*/
	new_node = (listint_t *)malloc(sizeof(listint_t));

	/* Handling memory allocatio failure */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	/* Assigning value to the new_node*/
	new_node->n = n;
	return (new_node);
}
