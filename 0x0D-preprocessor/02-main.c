#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the name of the file it was
 * compiled from
 *
 * Return: Nothing
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
