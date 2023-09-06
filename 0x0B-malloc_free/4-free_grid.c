#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function to free a 2 dimensional grid
 * @grid: The pointer to the two dimensional grid
 * @height: The size of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	while (height)
	{
		if (grid[height] != NULL)
		{
			free(grid[height]);
		}
		height--;
	}

	free(grid);
}
