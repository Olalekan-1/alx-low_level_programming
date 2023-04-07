#include "main.h"

/**
 * get_bit - to get bit at particular index
 * @n: the number to get index bit from
 * @index: the index
 * Return: The bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{	int bit;

	/* Handling error */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* right shift the num by index and mod by to get the remainder */
	/* or bit value at that at that index */
	bit = (n >> index) & 1;

	return (bit);
}
