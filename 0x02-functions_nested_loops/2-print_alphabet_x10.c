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
	int i;

	x = 'a';

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x >= 97 && x <= 122; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
