#include "main.h"

/**
* _strspn - To print the length of the substring
* @s: pointer to string
* @accept: pointer to the substring
* Return: the length of the substring in s
*/
unsigned int _strspn(char *s, char *accept)
{	int i = 0;
	int j, k;

	for (j = 0; s[j]; j++)
	{
	for (k = 0; accept[k]; k++)
	{
	if (s[j] == accept[k])
	{	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	{
	return (i);
	}
	}
	}
	return (i);
}
