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

	for (i = 0; i < min; i++)
	{
		ptr[i] = i;
	}
	for (; max; i++)
	{
		ptr[i] = i;
		max--;
	}

	return (ptr);
}
