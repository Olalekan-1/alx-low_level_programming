#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - To allocate and check the memory allocation
* @b: size of memor to be allocated
* Return: pointer to the memory allocated else exit value
*/

void *malloc_checked(unsigned int b)
{	int *ptr;

	ptr = malloc(b);
	if (ptr == ((void *)0))
	{
		exit(98);
	}
	return (ptr);
}
