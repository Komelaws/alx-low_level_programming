#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checking for digit (from 0 throgh 9)
 * @c: The operand to be checked
 * Return: 1 if C is digit
 * else return 0
 */
int _isdigit(int c)
{
	isdigit(c);
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
