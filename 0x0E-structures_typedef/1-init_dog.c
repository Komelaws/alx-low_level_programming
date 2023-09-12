#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initializes a variable of type struct
 * dog
 * @d: A variable of type struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of its owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
