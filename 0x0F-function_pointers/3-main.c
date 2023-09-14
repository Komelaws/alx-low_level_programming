#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

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
	char operator;

	num1 = atoi(*argv[1]);
	num2 = atoi(*argv[3]);
	operator = *argv[2];

	if (operator != ops.op)
	{
		printf("Error\n");
		exit(99);
	}

	calc = get_op_func(operator);
	printf("%d\n", calc);

	return (0);
}
