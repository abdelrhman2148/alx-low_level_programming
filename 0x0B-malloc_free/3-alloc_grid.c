#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - this function returns a pointer
 *                to a 2-dimensional array of integers
 *
 * @width: the first int
 * @height: the secound int
 *
 * Return: NULL or grid
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	
	}
	grid = (int **)calloc(height, sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
