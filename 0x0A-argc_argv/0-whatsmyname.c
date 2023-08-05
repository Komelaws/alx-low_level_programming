#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name followed by a
 * new line
 * @argc: Argument count
 * @argv: Argumen vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		if (argc > 0)
		{
			continue;
		}
		else if (argc == 0)
		{
			printf("%s\n", argv[0]);
		}
	}

	return (0);
}
