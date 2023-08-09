#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *str);

/**
 * _strdup - Function that return a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * parameter
 * @str: String to be copied
 *
 * Return: newstr
 */
char *_strdup(char *str)
{
	char *newstr;
	int size;
	int i;

	i = 0;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	newstr = (char *)malloc(sizeof(char) * size + 1);

	if (newstr == NULL)
		return (NULL);

	while (i < size)
	{
		newstr[i] = str[i];

		i++;
	}

	newstr[i] = '\0';

	return (newstr);
}


/**
 * _strlen - Function to calculate and return the length of a
 * string
 * @str: String length to be calculated
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;

	while (*str)
	{
		len++;

		str++;
	}

	return (len);
}
