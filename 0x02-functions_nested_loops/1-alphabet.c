#include <stdio.h>
#include "main.h"

/**
 * main - prints all the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
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
