#include "main.h"

/**
* print_last_digit - Entry point - prints the last digit of a number
* @n: The number to return;
* Return: The last digit of n
*/

int print_last_digit(int n)
{	int i;
	if (n < 0)
	{ i = n % 10;
	}
	if (i < 0)
	{ i = -i;
	}
	_putchar(i  + '0');
	return (i);
}

