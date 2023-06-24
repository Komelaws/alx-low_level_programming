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
		printf("%d", va_arg(args, int));
		if (i != (n-1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(args);
}
