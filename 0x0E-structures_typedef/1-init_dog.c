#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function to initialize the members of struct dog
 * @d: Pointer to the struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
