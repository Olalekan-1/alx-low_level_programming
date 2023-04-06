#include "main.h"

/**
 * binary_to_uint - function that convert binary to an unsigned int;
 * @b: The array that contain the  binary to be converted
 * Return: converted unsigned decimal/int
 */

unsigned int binary_to_uint(const char *b)
{
	signed int unit = 0;
	int i = 0;
	unsigned int len = 0;
	unsigned int bitvalue = 1;

	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if ((b[i] > '1') || (b[i] < '0'))
		{
			return (0);
		}
		if (b[i] == '1')
		{
			unit += bitvalue;
		}
		bitvalue <<= 1;
	}
	return (unit);
}
