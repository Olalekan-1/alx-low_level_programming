#include "main.h"

/**
* print_triangle - to print triangle
* @size: the size of the triangle
* Return: the triangle
*/

void print_triangle(int size)
{	int i, j, k;
	if (size <= 0)
	{	_putchar(10);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = size - i; j > 1; j--)
	{
	_putchar(32);
	}
	for (k = 0; k <= i; k++)
	{
	_putchar(35);
	}
	_putchar(10);
	}
	}
}
