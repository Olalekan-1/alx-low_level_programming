#include "lists.h"

/**
 * dlistint_len - Function to print the element of a list
 * @h: pointer to the head of the list
 * Return: the number of node in a list
 */



size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count;

	temp = h;

	count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

