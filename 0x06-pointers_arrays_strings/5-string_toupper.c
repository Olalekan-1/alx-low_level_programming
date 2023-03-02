#include "main.h"

/**
* string_toupper - To covert lowercase to upper case
* Return: The upper case
* @a: pointer to the string array
*/

char *string_toupper(char *a)
{	int i = 0;
	while (a[i++])
	{
	if (a[i] >= 'a' && a[i] <= 'z')
	a[i] = a[i] - ('a' - 'A');
	i++;
	}
	return (a);
}
