#include "function_pointers.h"

/**
* print_name - function to print a name
* @name: The name to print
* @f: function pointer
* Return: 0 always sucess
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
