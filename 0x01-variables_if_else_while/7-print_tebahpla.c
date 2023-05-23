#include <stdio.h>

/**
 * main - print reverse lower case alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
