#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array and
 * intializes it with a specific char
 * @size: The size of the array
 * @c: Character to initialize the array with
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i++] = c;
	}

	return (str);
}
