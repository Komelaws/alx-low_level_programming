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
	int arr_size;
	int *ptr;

	if (min > max)
		return (NULL);

	arr_size = (max - min) + 1;

	ptr = malloc(arr_size * sizeof(int));
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
	ptr[i] = i;

	return (ptr);
}
