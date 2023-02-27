#include "main.h"

/**
* print_rev - To prrint string in reverse direction
* @s: the variable to print from
* Return: the string in reverse direction
*/

void print_rev(char *s)
{	int l, i;
	l = 0;
	while (s[l] != '\0')
	l++;

	for (i = l - 1; i >= 0; i--)
	_putchar(s[i]);
	_putchar(10);
}
