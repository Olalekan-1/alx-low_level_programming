#include "main.h"

/**
* _strcat - to concatenate two strings
* @dest: the destination to append
* @src: the source to be append
* Return: the new value of dest
*/

char *_strcat(char *dest, char *src)
{	int i = 0;
	int j = 0;
	char ptr;

	while (dest[i] != '\0')
	{	i++;
	}
	while (src[j] != '\0')
	{ dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
