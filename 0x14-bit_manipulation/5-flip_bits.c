#include "main.h"

/**
 * flip_bits - to get bit flip to get number b
 * @n: number a
 * @m: number b
 * Return: The number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{	unsigned long int result;
	unsigned int count = 0;

	/* The XOR of n and m */
	result = n ^ m;

	while (result != 0)
	{
		if (result & 1)
		{
			count++;
		}
		result >>= 1;
	}
	return (count);
}
