#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print all the arguments it receives
 * @argc: Number of arguments
 * @argv: Arguments Received
 * @i: Iterator
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
