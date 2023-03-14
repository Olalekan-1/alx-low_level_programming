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

	if (width <= 0 || height <= 0)
	{
		return (((void *)0));
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == ((void *)0))
	{
		free(grid);
		return (((void *)0));
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == ((void *)0))
		{
			for (j = 0; j < height; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (((void *)0));
		}
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
