#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *str);

/**
 * str_concat - Function to concatenate two strings
 * @s1: Main string
 * @s2: String to concatenate to s1
 *
 * Return: newstr
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int size;
	int size1;
	int size2;
	int i;
	int j;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size = size1 + size2 + 1;
	newstr = (char *)malloc(sizeof(char) * size);

	if (newstr == NULL)
		return (NULL);

	if (s1 == NULL || s2 == NULL)
	{
		return (newstr);
	}
	else
	{
		i = 0;
		while (i < size1)
		{
			newstr[i] = s1[i];

			i++;
		}

		j = 0;
		while (j < size2)
		{
			newstr[i] = s2[j];

			j++;
			i++;
		}

		newstr[i] = '\0';
	}

	return (newstr);

}


/**
 * _strlen - Function to calculate and return the length
 * of a string
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
