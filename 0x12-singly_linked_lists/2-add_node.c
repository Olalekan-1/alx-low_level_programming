#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - function tp add new node at the begining
* @head: pointer to the head of the list
* @str: the new data to be updated
* Return: The new data from the begining
*/

list_t *add_node(list_t **head, const char *str)
{	list_t *new_node;
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
	while (str[len])
	len++;
	new_node->next = *head;
	new_node->len = len;
	*head = new_node;
	return (new_node);
}
