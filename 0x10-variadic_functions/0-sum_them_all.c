#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all
 * it's parameters
 * @n: Size of the variable-function-arguments
 *
 * Return: size
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int size;
	va_list args;

	size = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			va_end(args);
			return (0);
		}
		else
		{
			size += va_arg(args, int);
		}
	}

	va_end(args);

	return (size);
}
