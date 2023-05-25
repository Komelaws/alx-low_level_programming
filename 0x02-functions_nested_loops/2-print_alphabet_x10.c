#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Printing the alphabets 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char x;
	
	x = 'a';

	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; x <= 'z'; j++)
		{
			putchar(x);
			x++;
		}
		putchar('\n');
	}	

	return (0);
}
