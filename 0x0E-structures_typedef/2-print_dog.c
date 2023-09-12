#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a sturct dog
 * @d: The struct to print
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
