#include <stdio.h>
#include "main.h"

/**
 * _strlen - A function to return the length of a string
 * @s: String length to be returned
 *
 * Return: The string length
 */
int _strlen(char *s)
{
	int len;
	int i;

	len = 0;

	if (*s != '\0')
	{
		for (i = 0; i < *s; i++)
		{
			len++;
		}
	}

	return (len);
}
