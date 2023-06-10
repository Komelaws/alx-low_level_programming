#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive  numbers
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc != 0)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 0)
	{
		printf("0\n");
	}
	
	return (0);
}
