#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Printing numbers 0 through 9 except 2&4
 *
 * Retrun: Always 0 (success)
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57 && x >= 48; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		putchar(x);
	}

	putchar('\n');
}
