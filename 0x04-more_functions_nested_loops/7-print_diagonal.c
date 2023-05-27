#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - fuction to print a diagonal line
 * @n: operand to store the value of the line
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n <= 0)
			{
				putchar('\n');
			}
			else if (n > 0)
			{
				putchar(' ');
			}
			putchar('\\');
		}
		putchar('\n');
	}
}
