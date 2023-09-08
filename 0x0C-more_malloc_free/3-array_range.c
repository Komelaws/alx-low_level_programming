#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
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

	ptr = malloc(max * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < min)
	{
		ptr[min] = min - i;
		i++;
	}
	i = 0;
	while (i < max)
	{
		ptr[max] = max - i;
	}

	return (ptr);
}
