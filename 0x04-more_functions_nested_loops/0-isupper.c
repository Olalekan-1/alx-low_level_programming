#include "main.h"

/**
_isupper - To check if c is an upper case
@c: value to be checked
Return: 1 if c is upper else return 0
*/

int _isupper(int c)
{	if (c >= 65 && c <= 90)
	{	return (1);
	}
	return (0);	
}
