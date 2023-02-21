#include "main.h"

/**
* print_sign - Entry point; prints signs of a number
* @n: The number to be checked
* Return: return 1, when number is positive,
* return 0, when number is 0, return -1, when negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
}
