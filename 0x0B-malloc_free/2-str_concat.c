#include "main.h"
#include <stdlib.h>

/**
* str_concat - To concatenate two strings
* @s1: first string
* @s2: second string
* Return: pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{	int i = 0, j = 0, total, k, l;
	char *concat;

	if (s1 == ((void *)0))
	{
	s1 = "";
	}
	if (s2 == ((void *)0))
	{
	s2 = "";
	}

	while (s1[i] != '\0')
	{
	i++;
	}

	while (s2[j] != '\0')
	{
	j++;
	}

	total = i + j + 1;

	concat = malloc((total + 1) * sizeof(char));

	if (concat == ((void *)0))
	{
	return (((void *)0));
	}

	for (k = 0; k < i; k++)
	{
	concat[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
	concat[k + l] = s2[l];
	}
	concat[total - 1] = '\0';
	return (concat);
}
