#include "main.h"

/**
* print_alphabet_x10 - prints alphabet in lower case x10
* Return: 0 Always (sucess)
*/

void print_alphabet_x10(void)
{	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c  = 'a'; c <= 'z'; c++)
	{	_putchar(c);
	}
	_putchar(10);
	i++;
	}
}
