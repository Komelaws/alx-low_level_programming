#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Functions that prints strings
 * @separator: The string to be printed between the string
 * @n: The number of strings to print
 *
 * Return: Nothing
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		if (va_arg(list, char *) == NULL)
		{
			printf("nil");
		}
		else
			printf("%s", va_arg(list, char *));
		i++;
		if (i != n)
		{
			if (separator == NULL)
				continue;
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
