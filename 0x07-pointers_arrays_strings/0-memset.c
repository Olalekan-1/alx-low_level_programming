#include "main.h"

/**
* _memset - To print the memory set fill with a constant bytes
* @s: poiter to the memmory location to be set
* @b: To fill wih the value of b
* @n: the number of byte to be fill
* Return: the filled with n bytes
*/


char *_memset(char *s, char b, unsigned int n)
{	unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
