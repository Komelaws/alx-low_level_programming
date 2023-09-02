#include "main.h"

/**
 * _islower - Function to check for lowercase
 * @c: Value to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i;

	i = 0;
	if (c >= 97 && c <= 122)
	{
		i++;
	}

	return (i);
}
