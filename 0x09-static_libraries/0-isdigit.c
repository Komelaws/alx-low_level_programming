#include "main.h"

/**
 * _isdigit - Function to check for digit
 * @c: Value to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	i = 0;
	if (c <= 48 || c >= 57)
	{
		i++;
	}

	return (i);
}
