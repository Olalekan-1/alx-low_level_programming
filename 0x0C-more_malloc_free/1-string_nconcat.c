#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - To concatenate n byte to a string
* @s1: the first string
* @s2: the second string
* @n: The number of bytes to be concatenated
* Return: The concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{	int i = 0, k = 0, total = 0;
	unsigned int j = 0;
	char *concat;

	if (s1 == ((void *)0))
	{
	s1 = "";
	}
	if (s2 == ((void *)0))
	{
	s2 = "";
	}
	while (s1[i])
	i++;
	while (s2[j])
	j++;
	if (n >= j)
	total = i + j;
	else
	total = i + n;
	concat = malloc(sizeof(char) * total + 1);
	if (concat == ((void *)0))
	{
		return (((void *)0));
	}
	j = 0;

	while (k < total)
	{
		if (k <= i)
		{
			concat[k] = s1[k];
		}
		if (k >= i)
		{
			concat[k] = s2[j];
			j++;
		}
		k++;
	}
	concat[k] = '\0';
	return (concat);
}






















