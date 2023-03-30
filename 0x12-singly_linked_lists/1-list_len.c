#include "lists.h"

/**
* list_len - function to print the length of elements in linked list
* @h: The head of the list
* Return: The lenght of the list
*/

size_t list_len(const list_t *h)
{	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
