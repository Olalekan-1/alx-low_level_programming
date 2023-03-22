#include "function_pointers.h"

/**
* array_iterator - function to interate through an element of array
* @array: The array
* @size: The size of the array
* @action: pointer to function
* Return: The element of the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
