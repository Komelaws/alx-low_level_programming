#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: String to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
		if (!(*s))
			_putchar('\n');
	}
}
