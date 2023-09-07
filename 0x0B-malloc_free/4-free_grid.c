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
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
