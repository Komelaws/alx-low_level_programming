#include "main.h"

/**
 * factorial - A function that returns the factorial of
 * a given number
 * @n: Value whose factorial is to be returned
 *
 * Return: n * factorial(n - 1), otherwise -1 if n is less thatn 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);

}
