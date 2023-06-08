#include "hash_tables.h"
/**
 * key_index - function to get the index to store the value key
 * @key: The key
 * @size: size of the hash table
 * Return: The index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
