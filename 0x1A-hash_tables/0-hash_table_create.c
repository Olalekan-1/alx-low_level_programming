#include "hash_tables.h"

/**
  * hash_table_create - To create the hash table
  * @size: The size of the hash table
  * Return: Pointer to the hash table
  */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
