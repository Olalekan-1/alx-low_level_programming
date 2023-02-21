
#include "main.h"

/**
* print_last_digit - Entry point - prints the last digit of a number
* @n: The number to return;
* Return: The last digit of n
*/

int print_last_digit(int n)
{	int l;
	l = n % 10;
	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}

