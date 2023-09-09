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

	if (s1 == NULL && s2 == NULL)
	{
		str = "";
		return (str);
	}

	if (n >= _strlen(s2))
		str = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);
	else if (n < _strlen(s2))
		str = malloc((_strlen(s1) + n) * sizeof(char) + 1);
	else if (n <= 0)
		str = malloc(_strlen(s1) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	if ((s1 != NULL && s2 != NULL) && (n >= _strlen(s2)))
	{
		for (i = 0; i < _strlen(s1); i++)
			str[i] = s1[i];
		for (; *s2; i++)
			str[i] = *s2++;
	}
	else if ((s1 != NULL && s2 != NULL) && (n < _strlen(s2)))
	{
		for (i = 0; i < _strlen(s1); i++)
			str[i] = s1[i];
		for (; n; i++)
		{
			str[i] = *s2++;
			n--;
		}
	}
	else if (s1 == NULL && s2 != NULL)
	{
		for (i = 0; i < _strlen(s2); i++)
			str[i] = s2[i];
	}
	else if (s1 != NULL && s2 == NULL)
	{
		for (i = 0; i < _strlen(s1); i++)
			str[i] = s1[i];
	}

	str[i] = '\0';
	return (str);
}
