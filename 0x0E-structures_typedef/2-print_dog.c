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
	struct dog dog1;

	if (d == NULL)
		exit(0);

	d = &dog1;

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("%s", d->name);
	}

	if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("%f", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("%s", d->owner);
	}

}
