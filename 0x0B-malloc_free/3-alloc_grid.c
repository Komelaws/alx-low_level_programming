#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a two
 * dimensional array of integers
 * @width: The numbers of array
 * @height: The size of each array
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(sizeof(int **) * width);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < width)
	{
		ptr[i] = malloc(sizeof(int *) * height);
		i++;
	}

	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			ptr[i][j] = 0;
			j++;
		}

		i++;
	}

	return (ptr);
}
