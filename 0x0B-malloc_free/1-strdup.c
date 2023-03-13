#include "main.h"
#include <stdlib.h>

/**
* _strdup - Alocate meaning for the duplicate of a string
* @str: The string to be duplicated
* Return: pointer to the copy
*/

char *_strdup(char *str)
{	int i;
	char *s2;
	int l = 1;

	if (str == ((void *)0))
	{
	return (((void *)0));
	}

	while (str[l])
	{
	l++;
	}

	s2 = malloc((l + 1) * sizeof(char));

	if (s2 == ((void *)0))
	{
	return (((void *)0));
	}

	for (i = 0; i <= l; i++)
	{
	s2[i] = str[i];
	}
	return (s2);
}



