#include "main.h"

/**
 * clear_bit - function that set the value of bit to 0 at index
 * @n: The number to set its bit value
 * @index: The index to set bit
 * Return: 1 if success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{	unsigned long int b;
	/* Handling error */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	b = ~(1 << index);
	*n = (*n & b);
	return (1);
}

