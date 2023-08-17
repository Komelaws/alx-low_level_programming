#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * compare - Function to compare numbers
 * @n: Integer value
 *
 * Return: 0 if n is an integer 1 otherwise
 */
int compare(int n)
{
	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		return (0);
	else if (!((n >= 65 && n<= 90) || (n >= 97 && n <= 122)))
		return (1);
	else
		return (-1);
}




/**
 * int_index - Function that searches for an integer
 * @array: An array of integers
 * @size: Size of the array
 * @cmp: Function pointer to compare function
 *
 * Return: return the index of the first element that
 * is not == 0, if no elemnt matches, return -1, if
 * size is <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ret;

	if (size <= 0)
		return (-1);

	ret = 0;
	i = 0;
	while (size--)
	{
		ret = cmp(array[i]);

		i++;

		if (ret == 0)
			return (i);
	}

	return (i);


}
