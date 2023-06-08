#include "hash_tables.h"

/**
 * add_node - function to add node at the begginning of the list
 * @key: the key
 * @head: pointer to the head of the list
 * @value: the value
 * Return: 1 if success else 0)
 */

int add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (key == NULL && strlen(key) <= 0)
		return (0);
	new_node->key = key;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = *head;
	*head = new_node;
	return (1);
}

/**
 * hash_table_set - set element in the table
 * @key: the key
 * @value: the value
 * @ht: The table
 * Return: 1 if success else 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) <= 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_node(&(ht->array[index]), (char *)key, (char *)value) == 0)
		return (0);

	return (1);
}
