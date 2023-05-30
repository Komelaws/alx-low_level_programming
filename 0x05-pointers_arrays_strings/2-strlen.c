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
	int size;

	for (size = 0; *s != '\0'; *s++)
	{
		size++;
	}

	return (size);

}
