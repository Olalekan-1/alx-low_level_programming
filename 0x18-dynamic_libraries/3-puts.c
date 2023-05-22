#include "main.h"

/**
* _puts - To prints the values of string
* @str: The varible to hold the string
* Return: The strings
*/

void _puts(char *str)
{	int i = 0;
	while (str[i] != '\0')
	{	_putchar(str[i]);
	i++;
	}
	_putchar(10);
}

