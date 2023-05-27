#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function to print 10 rows of numbers
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
