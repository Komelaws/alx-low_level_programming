#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Function that returns the length of a string
 * @str: String length to be returned
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - Function that concatenates two strings
 * @s1: String value to be at the fron
 * @s2: String to be concatenated to s1
 *
 * Return: new_str
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *new_str;

	if (s1 != NULL && s2 != NULL)
	{
		new_str = (char *)malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
		if (new_str == NULL)
			return (NULL);
		i = 0;
		while (*s1)
			new_str[i++] = *s1++;
		while (*s2)
			new_str[i++] = *s2++;
		new_str[i] = '\0';
	}
	else if (s1 == NULL && s2 == NULL)
	{
		new_str = '\0';
	}
	else if ((s1 != NULL) && s2 == NULL)
	{
		new_str = malloc((_strlen(s2) + 1) * sizeof(char));
		if (new_str == NULL)
			return (NULL);
		i = 0;
		while (*s2)
			new_str[i++] = *s2++;
		new_str[i] = '\0';
	}
	else if ((s1 != NULL) && (s2 == NULL))
	{
		new_str = (char *)malloc((_strlen(s1) + 1) * sizeof(char));
		if (new_str == NULL)
			return (NULL);
		i = 0;
		while (*s1)
			new_str[i++] = *s1++;
		new_str[i] = '\0';
	}
	return (new_str);
}
