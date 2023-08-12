#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function to create an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * max);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i <= max)
	{
		ptr[i] = max--;
		i++;
	}

	return (ptr);
}
