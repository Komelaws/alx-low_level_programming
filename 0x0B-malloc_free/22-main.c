#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code for ALX School Student.
 *
 * Return: Always 0
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);

	return (0);
}
