#include <stdio.h>

/**
 * main - A program that prints all tha numbers
 * of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	char c;

	x = 48;
	c = 'a';

	if (x >= 48 && x <= 57)
	{
		while (x <= 57 && x >= 48)
		{
			putchar(x);
			x++;
		}
	}

	if (c >= 'a' && c <= 'f')
	{
		while (c >= 97 && c <= 102)
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');

	return (0);
}
