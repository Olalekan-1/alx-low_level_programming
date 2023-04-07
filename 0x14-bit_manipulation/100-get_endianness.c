#include "main.h"

/**
 * get_endianness - function to get the endianess
 * @void: void
 * Return: 1 if litle endian, 0 if big endian;
 */
int get_endianness(void)
{	unsigned int num;
	char *c;

	num = 0x00000001;
	c = (char *)&num;

	return ((int)*c);
}

