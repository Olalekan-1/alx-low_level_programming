#include "lists.h"

/**
 * sum_dlistint - to sum all the data of link list
 * @head: pointer to the headnode
 * Return: The sum of all data
 */

int sum_dlistint(dlistint_t *head)
{	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	/* traverse through the node to sum all it data */
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

