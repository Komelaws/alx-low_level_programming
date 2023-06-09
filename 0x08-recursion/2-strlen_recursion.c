#include "main.h"

/**
 * _strlen_recursion - A function that returns the
 * length of a string
 * @s: string length to be returned
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}
