#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that creats an 2 dimensional array of integers
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: A pointer to The array, or NULL (if it fails)
*/

int **alloc_grid(int width, int height)
{
	int **square;
	int i, j;

	square = malloc(width * height * sizeof(int));
	if (square == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			square[i][j] = 0;
		}
	}

	return (square);
}
