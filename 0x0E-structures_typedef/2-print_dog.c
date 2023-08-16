#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Function to print the details of a dog
 * @d: Pointer to the dog
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = ("nil");

	if (d->owner == NULL)
		d->owner = ("nil");

	printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
}
