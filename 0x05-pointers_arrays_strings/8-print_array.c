#include "main.h"
#include <stdio.h>

/**
* print_array - To print n number of array
* @a: the name of the array
* @n: The number of array to print
* Return: The n array
*/


void print_array(int *a, int n)
{	int i = 0;
	while (i < n)
	{
	if (a[i] != -1024)
	{	printf("%d, ", a[i]);
	}
	else
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
