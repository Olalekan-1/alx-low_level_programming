#include "main.h"

/**
* _strncpy - To copy string to a destination
* @dest: destination to copy to
* @src: The source to coopy from
* @n: The number of byte(s) to copy from source
* Return: The copied
*/

char *_strncpy(char *dest, char *src, int n)
{	int i = 0;
	while (src[i] != '\0' && i < n)
	{	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
