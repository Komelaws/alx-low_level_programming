#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 * @str: String length to be returned
 *
 * Returned: len
 */
int _strlen(char *str)
{
	int len;

	len =0;
	while (*str++)
	{
		len++;
	}

	return (len);
}


/**
 * _strcat - Function to concatenate two strings
 * @dest: Destination string
 * @src: String to concatenate to the string 1
 *
 * Return: dest
 */
char *_strcat(char *dest; char *src)
{
	int i;
	int lend;

	if (*src = '\0')
		return (dest);

	i = 0;
	lend = _strlen(dest);

	while (*src++)
	{
		dest[lend++] = src[i++];
	}

	dest[lend] = '\0';

	return (dest);
}
