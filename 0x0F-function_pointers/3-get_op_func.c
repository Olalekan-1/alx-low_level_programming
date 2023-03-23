#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* get_op_func - function to get the operator
* @s: the entered operator
* Return: the correction operation inline with the operator entered
*/
int (*get_op_func(char *s))(int, int)
{	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	return(NULL);
}
