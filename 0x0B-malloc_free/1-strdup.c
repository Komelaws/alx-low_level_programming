#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly
 * allocated space in memory, which contains a string
 * @str: String value to be copied to new location
 *
 * Return: new
 */
char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = (char *)malloc(1 + sizeof(str));
	if (new == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*str)
	{
		new[i++] = *str++;
	}

	new[i] = '\0';

	return (new);
}
