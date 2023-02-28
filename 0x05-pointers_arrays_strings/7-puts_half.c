#include "main.h"

/**
* puts_half - To prints the half of a string
* @str: The variable to print from
* Return: the half print string
*/

void puts_half(char *str)
{	int i = 0;
	int k;

	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 1)
	{
	k = (i - 1) / 2;
	k += 1;
	}
	else
	k = i / 2;
	for (; k < i; k++)
	{	_putchar(str[k]);
	}
	_putchar(10);
}
