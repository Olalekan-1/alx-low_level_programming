#include "lists.h"

/**
 * sum_listint - to sum all the data of link list
 * @head: pointer to the headnode
 * Return: The sum of all data
 */

int sum_listint(listint_t *head)
{	int sum = 0;
	listint_t *temp;

	temp = head;
	/* traverse through the node to sum all it data */
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
