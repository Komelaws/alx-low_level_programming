#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: The size of the array
 * @size: The size of each element of the array
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		ptr[i++] = 0;
	}

	(void)ptr;

	return (ptr);
}
