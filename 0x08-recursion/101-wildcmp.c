#include "main.h"

/**
* wildcmp - To compare two strings"
* @s1: first string
* @s2: second string
* Return: 0 if not same, 1 if same
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
	while (*s1 != '\0')
	{
	if (wildcmp(s1, s2 + 1))
	{
	return (1);
	}
	s1++;
	}
	return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

