#include "lists.h"

/**
* print_listint_safe - To print the lists of node
* @h: The pointer to the node
* Return: The elements in the and the total count
*/

size_t print_listint_safe(const listint_t *h)
{	int count = 0;
	const listint_t *slow;
	const listint_t *fast;

	slow = h;
	fast = h;

	if (h == NULL)
	{
		exit(98);
	}

	/* check if there is a loop */
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		 printf("[%p] %d\n", (void *)slow, slow->n);
		 count ++;

		slow = slow->next;
        	fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count ++;
			
			slow = slow->next;
			while (slow != fast)
			{
				 printf("[%p] %d\n", (void *)slow, slow->n);
				 count++;
				 slow = slow->next;
			}
			break;
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	return (count);
}
