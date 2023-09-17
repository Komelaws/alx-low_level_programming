#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Function that sums up all its arguments
 * @n: The number of arguments
 *
 * Reutrn: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	return (sum);
}
