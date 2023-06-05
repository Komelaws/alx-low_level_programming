#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - fucntion to print the last digit
 * of a number
 * @a: the digit to be printed
 *
 * Return: a % 10
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
