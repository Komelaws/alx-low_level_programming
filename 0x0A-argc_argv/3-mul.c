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
int main(__attribute__((unused)) int argc,__attribute__((unused)) char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
	}

	printf("%d\n", sum);

	return (0);
}
