#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printint 10x the numbers from 0 throgh 14
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 48; c <= 57; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
