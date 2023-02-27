#include "main.h"

/**
* puts2 - to print the first characters of string
* @str: the variable to print from
* Return: The values
*/

void puts2(char *str)
{	int i;
	i = 0;
	while (str[i] != '\0')
	{	_putchar(str[i]);
	i += 2;
	}
	_putchar(10);
}
