#include "variadic_functions.h"
#include <stdarg.h>

/**
 * _strlen - Function that return the lenght of a string
 * @str: String to return its length
 *
 * Return: len
 */
int _strlen(const char * const str)
{
	char *tmp;
	int len;

	tmp = (char *)str;
	len = 0;
	while (*tmp++)
	{
		len++;
	}

	return (len);
}

/**
 * print_all - Function that prints anything
 * @format: list of all types of arguments passed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i, num_args;
	va_list list;
	op ops[] = {
		{"c"},
		{"i"},
		{"f"},
		{"s"}
	};

	va_start(list, format);

	num_args = _strlen(format);
	i = 0;
	while (i < num_args)
	{
		if (format[i] == *(ops[i].c))
		{
			printf("%s", va_arg(list, const char * const));
		}
		i++;
	}
	printf("\n");

	va_end(list);
}
