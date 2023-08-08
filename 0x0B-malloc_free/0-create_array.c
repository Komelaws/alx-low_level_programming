#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * creat_array - Function that create an array of chars,
 * and initialize it with a specific char
 * @size: The size of the array
 * @c: Char to initialize the array with
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);


	str[0] = c;

	return (str);
}
