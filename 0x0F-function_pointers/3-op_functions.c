#include "function_pointers.h"

/**
 * op_add - Function that returns the sum of a and b
 * @a: First integer value
 * @b: Second integer value
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that returns the diff btw a and b
 * @a: First integer value
 * @b: Second integer operand
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that returns the prd of a and b
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a - b);
}

/**
 * op_div - Function that returns the result of the divison
 * of a by b
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that returns the remaindder of the
 * division of a by b
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
