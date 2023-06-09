#include "main.h"

/**
 * _put_recursion - A fucntion that prints a string follwed
 * by a new line
 * @s: Argument pointer to the string
 *
 * Return: Always 0
 */
void _put_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}

	_putchar('\n');
}
