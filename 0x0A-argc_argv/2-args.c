#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all arguments
 * it receives
 * @argc: The argument counts
 * @argv: The arguments received
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
