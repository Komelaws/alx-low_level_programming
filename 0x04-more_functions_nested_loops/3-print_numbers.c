#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Using putchar to print 0 to 9
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i >= 48 && i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
