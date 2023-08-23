#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a two
 * dimensional array of integers
 * @width: The row size of the array
 * @height: The column size of the array
 *
 * Return: ptr
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(width * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < width)
	{
		ptr[i] = malloc(height * sizeof(int));

		if (ptr[i] == NULL)
			return (NULL);

		i++;
	}

	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			*(*(ptr + i) + j) = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
