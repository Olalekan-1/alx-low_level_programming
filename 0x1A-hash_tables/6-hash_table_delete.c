#include "hash_tables.h"

/**
 * hash_table_delete - delet the table
 * @ht: The table
 * Return: the free table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *temp = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
