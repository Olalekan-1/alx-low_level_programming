#include "main.h"

/**
* factorial - To print the factorial of given number
* @n: the n number of factorial
* Return: The factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
