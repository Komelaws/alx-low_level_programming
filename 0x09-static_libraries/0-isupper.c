#include "main.h"

/**
 * _isupper - Function that checks for uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase character 0 otherwise
 */
int _isupper(int c)
{
	int i;

	i = 0;
	if (c >= 65 || c <= 90)
	{
		i++;
	}

	return (i);
}
