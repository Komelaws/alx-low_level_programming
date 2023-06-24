#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed
 * by a new line
 * @separator: A string of characters used as separaators
 * @n: Numbers of integers passed to the functions
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			continue;
		}
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}

	putchar('\n');

	va_end(args);
}
