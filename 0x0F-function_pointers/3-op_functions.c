#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* op_add - function to add two numbers
* @a: the first number tobe added
* @b: The second number to be added
* Return: the addition of the two parameter
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Function to subtract two numbers
* @a: The number to be substractd from
* @b: The number to subtract
* Return: the subtraction of the two number
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Function to multiply two numbers
* @a: number one to be multiply
* @b: number to be multiply
* Return: The multiplication the of the number
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Function to divide two number
* @a: the dividend
* @b: the divisor
* Return: the division of the two number
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (a / b);
}

/**
* op_mod - Function to find modulus
* @a: The dividend
* @b: The divisor
* Return: The modulus of the operation
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (a % b);
}

























