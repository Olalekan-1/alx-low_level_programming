#include "main.h"

/**
* _isdigit - to chech number from to 9
* @c: value to check from
* Return: 1 if value is from 0 through 9 else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{	return (1);
	}
	return (0);
}

