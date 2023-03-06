#include "main.h"

/**
* _strpbrk - To search and return a character from string
* @s: pointer to the string
* @accept: The string to search
* Return: the character if found else NULL
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s >= '\0')
	{
	while (*accept >= '\0')
	{
	accept++;
	if (*s == *accept)
	{
	return ((char *)s);
	}
	s++;
	}
	}
	return (((void *)0));
}


