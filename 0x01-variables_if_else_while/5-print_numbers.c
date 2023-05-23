#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the base 10 numbers from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
