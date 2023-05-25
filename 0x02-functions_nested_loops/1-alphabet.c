#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
