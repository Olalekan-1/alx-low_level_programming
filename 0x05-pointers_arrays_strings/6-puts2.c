#include "main.h"

/**
* puts2 - to print the first characters of string
* @str: the variable to print from
* Return: The values
*/

void puts2(char *str)
{	int i, j;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	while (j < i)
	{	_putchar(str[j]);
	j += 2;
	}
	_putchar(10);
}
