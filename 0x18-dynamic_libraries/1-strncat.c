#include "main.h"

/**
* _strncat - To concatenate strings
* @dest: The destination to append to
* @src: The scr to be append
* @n: the byte(s) to append
* Return: the appended destination with n byte(s)
*/

char *_strncat(char *dest, char *src, int n)
{	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{	i++;
	}
	while (src[j] != '\0' && j < n)
	{	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

