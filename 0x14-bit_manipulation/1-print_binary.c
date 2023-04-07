#include "main.h"


/**
 * print_binary - To represent number in binary
 * @n: The number to be reprensented in binary
 * Return: void ...
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /* base case */
	{
		print_binary(n >> 2); /* dividing n by 2 */
	}
	/* handling the remauinder */
	_putchar((n & 1) ? '1' : '0');
}
