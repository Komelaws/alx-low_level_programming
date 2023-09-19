#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: String to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, const unsigned int));
		i++;
		if (i != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
