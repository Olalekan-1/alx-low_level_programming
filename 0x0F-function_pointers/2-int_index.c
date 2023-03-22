#include "function_pointers.h"

/**
* int_index - To check the index of an array
* @array: The array to be checked
* @size: The size of an array
* @cmp: Function to use to check
* Return: The index of the checked otherwise something else
*/

int int_index(int *array, int size, int (*cmp)(int))
{	size_t i;
	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != '\0')
			{
				return (i);
			}
		}
		return (-1);
	}
}
