#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prnts a name
 * @name: Input namem
 *
 * Return: Always 0
 */
void print_name(char *name, __attribute__((unused))void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
