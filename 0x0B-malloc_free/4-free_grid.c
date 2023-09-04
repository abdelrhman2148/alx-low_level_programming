#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this function frees a 2-dimensional grid previously created
 *                                     by the alloc_grid function
 *
 * @height: the integer for num of rows.
 * @grid: pointer to the 2D grid previously created by alloc_grid.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
