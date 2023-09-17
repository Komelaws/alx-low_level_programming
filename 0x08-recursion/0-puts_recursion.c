#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Function that prints a string
 * @s: String to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	char c;

	if (*s)
	{
		c = *s;
		write(1, &c, 1);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
