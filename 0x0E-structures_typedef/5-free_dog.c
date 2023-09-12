#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees the memory allocated for a struct
 * dog
 * @d: A pointer to the memory allocated
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
