#include "main.h"


/**
 * _strlen - Function to returnthe length of a string
 * @s: String to return its length
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
	{
		len++;
	}

	return (len);
}
