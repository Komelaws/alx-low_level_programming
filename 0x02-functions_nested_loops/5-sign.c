#include <stdio.h>
#include "main.h"

/**
 * print_sign - print a sign as alternative to character
 * @n: operand to be checked
 * Return: 1 if n is greater than 0, 0 if is 0, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
		putchar('+');
		return (1);
	else if (n == 0)
		puthar(48);
		return (0);
	else if (n < 0)
		putchar ('-');
		return (-1);
	
}
