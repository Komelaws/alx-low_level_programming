#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: String to print
 * @f: Function pointer to function that prints name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *str))
{
	f(name);
}
