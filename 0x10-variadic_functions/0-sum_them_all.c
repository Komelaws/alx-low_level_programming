#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all
 * its parameters
 * @n: The First operand to the function
 * @...: The optional function arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list list;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(list, n);

	while (va_arg(list, unsigned int))
	{
		sum = sum + va_arg(list, const unsigned int);
	}

	va_end(list);

	return (sum);
}
