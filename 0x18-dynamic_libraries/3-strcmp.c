#include "main.h"

/**
* _strcmp - To compare two strings
* @s1: The first character to be compare
* @s2: The second charcter to be compare
* Return: 0 if same, 15 s1 >  s2, -15 if otherwise
*/

int _strcmp(char *s1, char *s2)
{	int i = 0;
	while (s1[i] == s2[i])
	{
	if (s1[i] == '\0' || s2[i] == '\0')
	break;
	i++;
	}
	if (s1[i] < s2[i])
	return (-15);
	else if (s1[i] > s2[i])
	return (15);
	else
	return (0);
}

