#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *s;

	s = _strdup("First, solve the problem. Then, write the code.");
	if (s == NULL)
	{
		printf("Failed to allocate memory");
		return (1);
	}

	printf("%s\n", s);
	free(s);

	return (0);
}
