#include "main.h"

/**
 * _memset - Function that initialize a region of memory
 * @s: Address of the first by of memory
 * @b: Character to assign to memory location
 * @n: The size in bytes to be set
 *
 * Return: The address of the first n byte 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n <= 0)
		return (s);

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
