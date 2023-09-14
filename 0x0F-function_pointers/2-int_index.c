#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Pointer to an array of integers
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to compare the array elements
 *
 * Reutrn: ret_val
 */
int int_index(int *array, int size, int (*cmp)(int n))
{
	int i;
	int ret_val;

	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		ret_val = cmp(array[i]);
		if (ret_val != 0)
			return (i);
		i++;
	}

	return (ret_val);
}
