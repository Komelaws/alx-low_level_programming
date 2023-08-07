#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print the number of arguments passed
 * into it
 * @argc: The number of arguments
 * @argv: The arguments passed into to the program
 *
 * Return: Always 0
 */
int main(int argc,--((unused))--char *argv[])
{
	int i;

	i = 0;

	if (argc == 1)
	{
		printf("%d\n", i);
	}
	else if (argc > 1)
	{
		while (argc > 1)
		{
			i++;

			argc--;
		}

		printf("%d\n", i);
	}

	return (0);
}
