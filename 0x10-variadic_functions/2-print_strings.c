#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function to print numbers
* @separator: The separator
* @n: The number of string  passed
* Return: The number
*/

void print_strings(const char *separator, const unsigned int n, ...)
{	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("nil\n");
		}
		printf("%s", s);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

