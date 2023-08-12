#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int _strlen(char *str);

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string value
 * @s2: Second string value
 * @n: The size of s2 to concatenate to s1
 *
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;
	unsigned int size;
	char *str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	size = len1 + len2;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);


	if (s1 != NULL && s2 != NULL)
	{
		i = 0;

		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}

		if (n == 0)
		{
			str[i] = '\0';
			return (str);
		}
		else
		{
			if (n < len2)
			{
				j = 0;
				while (j < n)
				{
					str[i] = s2[j];
					j++;
					i++;
				}
				str[i] = '\0';
			}
			else if (n >= len2)
			{
				j = 0;
				while (s2)
				{
					str[i] = s2[j];
					i++;
					j++;
				}

				str[i] = '\0';
			}

			return (str);
		}
	}
	else if (s2 == NULL)
	{
		i = 0;
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';

		return (str);
	}
	else if (s1 == NULL)
	{
		i = 0;
		while (i < len2)
		{
			str[i] = s2[i];
			i++;
		}
		str[i] = '\0';

		return (str);
	}

	return (str);
}


/**
 * _strlen - Function to return the length of a string
 * @str: String length to be returned
 *
 * Return: len
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}
