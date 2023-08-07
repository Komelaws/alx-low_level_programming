#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to multiply two digits received as
 * an arguments
 * @argc: Number of arguments
 * @argv: The Arguments passed to the program
 * @a: Integer value
 * @b: Another integer value
 *
 * Return: Alwasy 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	a = b = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}

	return (0);
}
