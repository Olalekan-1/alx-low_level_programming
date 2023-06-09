#include "hash_tables.h"

/**
 * hash_table_print - to prunt the table
 * @ht: the table to print
 * Return: The table wit the key-value
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			count++;
		}
	}
	printf("}\n");
}


