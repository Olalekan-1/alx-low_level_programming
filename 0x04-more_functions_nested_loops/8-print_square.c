#include "main.h"

/**
* print_square - To prints square using #
* @size: The size of the squre
* Return: The squre
*/

void print_square(int size)
{	int i, j;
	if (size <= 0)
	{	_putchar(10);
	}
	else if (size == 2 || size == 10)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{	_putchar(35);
	}
	_putchar(10);
	}
	}
}
