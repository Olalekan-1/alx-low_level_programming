#include "main.h"
#include <stdlib.h>

/**
* _memset - To print the memory set fill with a constant bytes
* @s: pointer to the memmory location to be set
* @b: To fill wih the value of b
* @n: the number of byte to be fill
* Return: the filled with n bytes
*/
char *_memset(char *s, char b, unsigned int n);

char *_memset(char *s, char b, unsigned int n)
{	unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}


/**
* _calloc - To allocte block of memory to an array
* @nmemb: The number element to be allocated
* @size: size of element to be alocated
* Return: pointer to the mem alocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{	void *ptr;

	if ((nmemb == 0) || (size == 0))
	{
		return (((void *)0));
	}
	ptr = malloc(nmemb * size);
	if (ptr == ((void *)0))
	{
		return (((void *)0));
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
