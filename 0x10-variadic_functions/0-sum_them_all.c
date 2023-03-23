#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function to sum all the parameter passed
* @n: the numbers of parameter to be passed
* Return: The sum total
*/

int sum_them_all(const unsigned int n, ...)
{	int i, sum = 0;

	if (n == 0)
	return (0);
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
