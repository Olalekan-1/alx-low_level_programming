#include "main.h"

/**
* print_diagonal - to print \ in digonal
* @n: the diagonal length
* Return: the diagonals
*/

void print_diagonal(int n)
{	int i, j;
	if (n <= 0)
	{	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{	_putchar(32);
	}
	_putchar(92);
	_putchar(10);
	}
	}
}
