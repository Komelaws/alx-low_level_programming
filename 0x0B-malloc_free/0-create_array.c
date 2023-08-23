#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Fucntion that creates an array of char
 * and initializes the array
 * @size: Size of the array
 * @c: Character to initialize the array
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

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
