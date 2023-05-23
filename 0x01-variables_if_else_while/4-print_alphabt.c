#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	x = 97;
	while (x < 123)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
