#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2D
 * array
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: two_d
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **two_d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_d = (int **)malloc(height * sizeof(int *));
	if (two_d == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		two_d[i++] = (int *)malloc(width * sizeof(int));
		if (two_d[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(two_d[i]);
			}
			free(two_d);
			return (NULL);
		}
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			*two_d[i] = 0;
			j++;
		}
		i++;
	}

	return (two_d);
}
