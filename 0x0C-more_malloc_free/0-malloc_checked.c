#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: The size of the memory to be allocated in bytes
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);


	return (ptr);
}
