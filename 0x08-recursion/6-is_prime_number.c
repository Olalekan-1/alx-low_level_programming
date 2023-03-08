#include "main.h"

/**
* is_prime_number - To check if n is prime number
* @n: the number to check
* @i: index
* Return: 1 if prime , 0 if otherwise,
*/

int checkprime(int n, int i);


int is_prime_number(int n)
{
	return (checkprime(n, 1));
}

/**
* checkprime - To check the primality of a number
* @n: The number to be checked
* @i: the index
* Return: the condition prime 1, otherwise 0
*/

int checkprime(int n, int i)
{
	if (n <= 1)
	{
	return (0);
	}
	if ((n == 2) || (n == 3))
	{
	return (1);
	}
	if (n % i == 0 && i > 1)
	{
	return (0);
	}
	if ((n / i) < i)
	{
	return (1);
	}
	return (checkprime(n, i + 1));
}

