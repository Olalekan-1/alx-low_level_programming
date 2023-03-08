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
	if (*(s2+1) == '\0')
	{
	return 1;
        }
	return ((*s1 != '\0' && wildcmp(s1+1, s2) == 1) || wildcmp(s1, s2+1));
	if (wildcmp(s1, s2 + 1))
	{
	return (1);
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

