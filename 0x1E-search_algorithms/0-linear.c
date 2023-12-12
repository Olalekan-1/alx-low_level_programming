#include "search_algos.h"


/**
 * linear_search - implementation of linear search
 * @array: pointer to the array to search for element
 * @size: size of the array tobe search
 * @value: The element to search in the array
 * Return: The index of the serched elememt if found
 * else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = 0;
	size_t index;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			found = 1;
			printf("Value checked array[%li] = [%i]\n", i,  array[i]);
			/* printf("%li\n", i);*/
			index = i;
			break;
		}
		else
			printf("Value checked array[%li] = [%i]\n", i,  array[i]);
	}

	if (found == 0)
		return (-1);
	return (index);
}
