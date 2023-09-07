#include <stdio.h>

/**
 * main - Progam to check the size of a pointer to an array
 * of strings
 * @ac: The number of arguments
 * @av: The pointer to the array of strings
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	printf("%d\n", ac);
	printf("%d\n", sizeof(*av));

	return (0);
}
