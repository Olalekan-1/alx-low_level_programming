#include "main.h"

int _sqrt(int n, int i);

/**
* _sqrt_recursion - to print the sqrt of a numnber
* @n: the number to find its sqrt
* Return: the sqrt
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - To calculate the sqrt of a number
* @n: The number to print it sqrt
* @i: use to find the sqrt
* Return: Tggg
*/

int _sqrt(int n, int i)
{	int j = i * i;
	if (j > n)
	{
	return (-1);
	}
	if (j == n)
	{
	return (i);
	}
	else
	return (_sqrt(n, i + 1));
}
