#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random numbers
 * @n: Random number generator
 *
 * Description: A funciton to generate
 * random numbers
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
