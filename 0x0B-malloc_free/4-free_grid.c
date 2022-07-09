#include <stdlib.h>
/**
 * free_grid - free a 2d grid
 * alloc_grid function
 * @grid: the grid
 * @height: the no of rows
 * return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

