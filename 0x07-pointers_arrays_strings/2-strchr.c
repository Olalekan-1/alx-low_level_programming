#include "main.h"

/**
* _strchr - To search and return a character from string
* @s: pointer to the string
* @c: The string to search
* Return: the character if found else NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return ((char *)s);
	}
	else
	return (((void *)0));
	s++;
	}
	return (s);
}

