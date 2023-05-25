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
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z')
		return 1;
	else
		return 0;
}
