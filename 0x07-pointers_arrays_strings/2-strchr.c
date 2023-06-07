#include "main.h"

/**
 * char *_strchr - fuction that locates a character
 * in a string
 * @s: The string to search
 * @c: The string to find
 *
 * Return: A pointer to the first character of c
 * in the string s
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
