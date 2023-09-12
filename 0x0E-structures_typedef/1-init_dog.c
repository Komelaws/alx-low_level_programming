#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Function that returns the lenght of a string
 * @str: String length to be returned
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - Fucntion that copies a string to another location
 * @dest: Destination to copy string to
 * @src: String to be copied
 *
 * Return: dest
 */
void _strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i < _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}


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
		_strcpy((*d).name, name);
		(*d).age = age;
		_strcpy((*d).owner, owner);
	}
}
