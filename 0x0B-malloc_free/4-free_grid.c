#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-dimensional array
 *             created by alloc_grid function
 * @grid: The 2-dimensional array to be freed.
 * @height: The height of the grid
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
