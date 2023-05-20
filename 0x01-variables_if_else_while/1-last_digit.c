#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 
 * @n: Stores the generated number
 *
 * Description: This is a function that generates a random number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, n);
	if (n < 6 && != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n");

	return (0);
}
