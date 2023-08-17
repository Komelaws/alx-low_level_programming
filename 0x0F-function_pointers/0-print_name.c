#include <stdio.h>
#include "function_pointers.h"

void print(char *str);

/**
 * print_name - Function to print the name of a user
 * @name: A string of character to be printed
 * @f: Function pointer to print a string
 *
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}


/**
 * print - Function to print a string
 * @str: String value to be printed
 *
 * Return: Always 0
 */
void print(char *str)
{
	while (*str)
	{
		putchar(*str++);
		str++;
	}
}
