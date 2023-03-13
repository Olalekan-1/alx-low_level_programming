#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - to allocate memory to 2D array
* @width: the width of the array
* @height: The height of the array
* Return: pointer to the memory allocated
*/

int **alloc_grid(int width, int height)
{	int i, j;
	int **grid;
	int *k;

	if (width <= 0 || height <= 0)
	{
	return (((void *)0));
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == ((void *)0))
	{
	return (((void *)0));
	}

	for (i = 0; i < width; i++)
	{
	grid[i] = (int *)malloc(sizeof(int) * width);
	}

	if (grid[i] == ((void *)0))
	{
	return (((void *)0));
	}

	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}
	return (grid);

}
