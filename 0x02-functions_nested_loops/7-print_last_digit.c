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
int print_last_digit(int a)
{
	putchar(a % 10);

	return (a % 10);
}
