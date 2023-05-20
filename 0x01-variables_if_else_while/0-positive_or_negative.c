#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random numbers
 * @n: This is where the random number would be stored
 *
 * Description: This is a function that generates a random
 * number eaach time that the program is run and to print
 * out the type of that is generated.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
