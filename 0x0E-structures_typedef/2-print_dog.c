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
	d = &my_dog;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	if (d->age == NULL)
	{
		printf("Age: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

}
