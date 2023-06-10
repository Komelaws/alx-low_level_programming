#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints it's number of arguments
 * @argc: Number of arguments
 * @argv: arguments entered
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
