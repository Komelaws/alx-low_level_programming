#include "3-calc.h"

/**
 * main - check the code
 * @argc: Number of arguments to main
 * @argv: A pointer to the arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int calc;
	int num1;
	int num2;
	int (*fptr)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fptr = get_op_func(argv[2]);
	if (!(fptr))
	{
		printf("Error\n");
		exit(99);
	}

	calc = fptr(num1, num2);
	printf("%d\n", calc);

	return (0);
}
