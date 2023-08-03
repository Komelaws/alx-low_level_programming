#include "main.h"

/**
 * _puts_recursion - A fucntion that prints a string
 * followed by a new line
 * @s: Value to be printed
 * @c: Character operand.
 * @i: recursive counter
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	char c;

	c = s;
	_putchar(c);

	_puts_recursion(s - 1);
}
