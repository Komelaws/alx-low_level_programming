#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checking for uppercase
 * @c: operand to be checked
 * Return: 1 if C is upper
 * 0 if otherwise
 */
int _isupper(int c)
{
	isupper(c);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
