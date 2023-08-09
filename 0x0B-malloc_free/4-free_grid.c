#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 * @grid: The array of 2 dimensions
 * @height: The number of rows
 *
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
