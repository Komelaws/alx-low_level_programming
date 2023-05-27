#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
			{
				putchar('\n');
			}
			putchar('#');
		}
		putchar('\n');
	}
}
