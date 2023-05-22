#include "main.h"

/**
* _strstr - function to locate a substring
* @haystack: the string to search from
* @needle: the substrin
* Return: the string
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *i = haystack;
	char *j = needle;

	while (*i == *j && *j != '\0')
	{
	i++;
	j++;
	}
	if (*j == '\0')
	return (haystack);
	}
	return (((void *)0));
}

