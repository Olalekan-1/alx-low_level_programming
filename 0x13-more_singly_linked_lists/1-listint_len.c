#include "lists.h"

/**
* listint_len - To list the number of element in a node
* @h: pointer to the head node
* Return: The number of element
*/

size_t listint_len(const listint_t *h)
{	int count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
