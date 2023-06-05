#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checking if character is alphabet
 * @c: operand to be checked
 * Return: 1 if letter otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
