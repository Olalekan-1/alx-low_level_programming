#include "main.h"

/**
* _memcpy - To copy a memoery area
* @dest: The destination to copy to
* @src: The source to copy from
* @n: The n bytes to copy
* Return: to the destination the n bytes cpied from the src.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{	unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}

