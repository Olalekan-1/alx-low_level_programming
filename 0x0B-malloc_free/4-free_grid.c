#include <stdlib.h>
#include "main.h"

/**
* free_grid - function to free a 2 dimensional array
* @grid: pointer to the array
* @height: the row of the arrary
* Return: the freed malloc
*/

void free_grid(int **grid, int height)
{	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
