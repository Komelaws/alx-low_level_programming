#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Function that return the lenght of a string
 * @str: String length to be returned
 *
 * Return: len
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string value
 * @s2: Second string value
 * @n: An integer value
 *
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *str;

	if (n <= 0)
	{
		str = malloc(sizeof(s1) + 1);
		if (str == NULL)
			return (NULL);

		i = 0;
		while (i < _strlen(s1))
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
	}
	else if (n >= _strlen(s2))
	{
		str = malloc((_strlen(s1) * _strlen(s2)) + 1);
		if (str == NULL)
			return (NULL);

		i = 0;
		while (i < _strlen(s1))
		{
			str[i] = s1[i];
			i++;
		}
		while (*s2)
		{
			str[i] = *s2++;
		}
		str[i] = '\0';
	}
	return (str);
}
