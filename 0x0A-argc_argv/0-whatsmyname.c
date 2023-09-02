#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints its own name
 * @argc: The arguments counts
 * @argv: The arguments
 *
 * Return: Always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	while (*(argv[0]))
	{
		putchar(*(argv[0])++);
	}

	putchar('\n');

	return (0);
}
