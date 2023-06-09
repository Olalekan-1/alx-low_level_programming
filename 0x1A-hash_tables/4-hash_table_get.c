#include "hash_tables.h"

/**
 * hash_table_get - To retrieve element from the table
 * @ht: The table
 * @key: The key
 * Return: the value associate to key else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;


	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	
	while (ht->array[index])
	{
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	}
	return (NULL);

}
