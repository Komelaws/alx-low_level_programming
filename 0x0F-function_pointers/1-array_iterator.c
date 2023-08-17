#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * arr_action - Fuction to perform an action on an array
 * @arr: Elements of the array
 *
 * Return: Always 0
 */
void arr_action(int arr)
{
	putchar(arr);
}



/**
 * array_iterator - Function to that execute a function
 * given as a parameter on each element of an array
 * @array: An array of integers
 * @size: Size of the array
 * @action: Function pointer to the function
 *
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;

	while (size--)
	{
		action(array[i]);
		i++;
	}
}
