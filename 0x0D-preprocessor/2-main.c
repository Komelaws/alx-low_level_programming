#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print the name of the program it was
 * compiled from, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
