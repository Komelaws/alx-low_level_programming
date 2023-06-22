#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prnts a name
 *
 * Return: Always 0
 */
void print_name(char *name,__attribute__((unused))void (*f)(char *))
{
	unsigned int i;

	i = 0;
	while (name[i])
	{
		putchar(name[i]);
		i++;
	}

	

	putchar('\0');
}
