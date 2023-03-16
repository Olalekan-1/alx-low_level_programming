#include <stdlib.h>
#include "main.h"

/**
* array_range - To create an array of integer
* @min: min arry
* @max: max array
* Return: pointer to array
*/


int *array_range(int min, int max)
{	int *arr, size;

	if (min > max)
	{
	return (NULL);
	}
	size = (max - min + 1);
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
	return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
	arr[i] = min + i;
	}
	return (arr);
}

