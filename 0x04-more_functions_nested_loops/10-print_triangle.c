#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: The size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}	
