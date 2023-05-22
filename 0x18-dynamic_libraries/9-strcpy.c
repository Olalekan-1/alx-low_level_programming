#include "main.h"

/**
* _strcpy - To coppy a string from source to a destn.
* @src: The source return value;
* @dest: The destination return value.
* Return: 0 always sucess
*/

char *_strcpy(char *dest, char *src)
{	int i;
	for (i = 0; src[i] != '\0'; i++)
	{	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

