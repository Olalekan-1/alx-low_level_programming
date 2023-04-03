#include "lists.h"

/**
* print_listint - To print the element in a node
* @h: The pointer to the node
* Return: The elements in the and the total count
*/

size_t print_listint(const listint_t *h)
{	int count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
