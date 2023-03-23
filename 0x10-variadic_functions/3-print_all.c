#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all - print all argument passed
* @format: The format specifier
* Return: The argumment passed
*/

void print_all(const char * const format, ...)
{	char c_val;
	int i_val;
	float f_val;
	char *s_val;
	int i;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			c_val = (char) va_arg(args, int);
			printf("%c", c_val);
			break;
			case 'i':
			i_val = (int) va_arg(args, int);
			printf("%d", i_val);
			break;
			case 'f':
			f_val = (float) va_arg(args, double);
			printf("%f", f_val);
			break;
			case 's':
			s_val = va_arg(args, char *);
			if (s_val)
			printf("%s", s_val);
			else
			printf("nil");
			break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

