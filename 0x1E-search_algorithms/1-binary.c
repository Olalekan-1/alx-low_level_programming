#include "search_algos.h"

int print_array(int *array, int start, int end);
/**
 * print_array - prints the element of array
 * @array: pointer to the start of the array
 * @start: The starting index to print from
 * @end: The lasr element to be printed
 * Return: Return 0 for sucesss
 */

int print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[end]);
	return (0);
}



/**
 * binary_search - Implementation of binary search Algo.
 * @array: pointer to the array to be searched
 * @size: size of the array to be searched
 * @value: The element to be serched
 * Return: The index of the element else -1
 */




int binary_search(int *array, size_t size, int value)
{
	int start, end, mid;

	start = 0;
	end = size - 1;
	printf("Searching in array: ");
	print_array(array, start, end);

	while (start < end)
	{
		mid = (start + end) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			end = mid - 1;
			printf("Searching in array: ");
			print_array(array, start, end);
		}
		if (array[mid] < value)
		{
			start = mid + 1;
			printf("Searching in array: ");
			print_array(array, start, end);
		}
		if ((start == end) && (start == mid))
			return (mid);
	}
	return (-1);
}





