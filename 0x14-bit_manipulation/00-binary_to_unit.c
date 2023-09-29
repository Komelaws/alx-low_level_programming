#include "main.h"

/**
 * _strlen - Function that returns the lenth of a string
 * @s: A pointer to the string
 *
 * Return: len
 */
unsigned int (const char *s)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * binary_to_unit - Function that converts a binary number to
 * an unsigned int
 * @b: A pointer to the string of binary numbers
 *
 * Return: demial_value
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int decimal_value;
	unsigned int tmp;
}
