#include <stdio.h>
#include "main.h"

/**
 * swap_int - A function that swaps the values of two pointers
 * @a: First swapping operand
 * @b: Second swapping operand
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int *c;

	c = &a;
	a = &b;
	b = &a;
}
