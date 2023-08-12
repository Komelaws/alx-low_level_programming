#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _callo - Function that allocates memory to an array
 * using malloc
 * @nmemb: Members of the array
 * @size: Size of each array
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(nmemb) * size);

	if (ptr == NULL)
		return (NULL);


	i = 0;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}

	return ((void *)ptr);
}
