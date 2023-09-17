#include "main.h"

/**
 * factorial - Function that returns the factorial of a number
 * @n: Number to find its factorial
 *
 * Return: fact
 */
int factorial(int n)
{
	int fact;

	fact = 0;
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	fact = n * factorial(n - 1);

	return (fact);
}
