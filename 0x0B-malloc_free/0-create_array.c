#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that create an array of chars,
 * and initialize it with a specific char
 * @size: The size of the array
 * @c: Char to initialize the array with
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}


	return (str);
}
