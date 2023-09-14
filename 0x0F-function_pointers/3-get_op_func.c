#include "calc.h"

/**
 * get_op_func - Function that selects the function to perform
 * the operation asked by the user
 * @s: The operator to determine the user operation
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: A pointer to a function according to user operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (*s++)
	{
		if (*s == ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
