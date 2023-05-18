#include "lists.h"

/**
 * print_dlistint - Function to print the element of a list
 * @h: pointer to the head of the list
 * Return: the number of node in a list
 */



size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count;

	temp = h;

	count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
