#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints a grid of integers
 * @grid: The address of the two dimensional array
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Nothing
 */
void print_grid(int **grid, int width, int height)
{
	while (height--)
	{
		while (width--)
		{
			printf("%d ", *(*grid++));
		}
		printf("\n");
	}
}


/**
 * main - check the code for ALX School Student
 *
 * Return: Nothing
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	free_grid(grid, 4);
	return (0);
}
