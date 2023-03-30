#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - to add node to the tail of the list
* @head: The head of the list
* @str: The string to be added
* Return: The node at the end
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	int len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	while (str[len])
	len++;
	new_node->len = len;
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
	return (new_node);
}
