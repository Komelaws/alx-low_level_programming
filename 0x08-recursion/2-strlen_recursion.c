#include "main.h"

/**
 * _strlen_recursion - Functtion that returns the length of a string
 * @s: String to find its length
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		return (len);
	}
	len += _strlen_recursion(s + 1);

	return (len);
}
