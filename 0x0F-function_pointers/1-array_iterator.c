#include "function_pointers.h"

/**
 * array_iterator - Function that searches for an integer
 * @array: A pointer to the array
 * @size: The size of the array
 * @action: A pointer to the function to evaluates the array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int n))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
