#include <stdio.h>
#include "main.h"

/**
 * print_line - printing a line on the terminal
 * @n: The number of times the character should print
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	else if (n <= 0)
	{
		putchar('\n');
	}
}
