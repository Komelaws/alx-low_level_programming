#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Function that returns the length of a string
 * @av: The number of strings in a the array
 * @size: The size of the array
 *
 * Return: len
 */
int _strlen(char **av, int size)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		while ((*(*av))++)
		{
			len++;
		}
		i++;
	}
	return (len);
}

/**
 * argstostr - Function that concatenates all its arguments
 * @ac: The number of arguments
 * @av: A string of the arguments
 *
 * Return: args
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	args = (char *)malloc((_strlen(av, ac) + 1) * sizeof(char));
	if (args == NULL)
		return (NULL);

	i = 0;
	while (i <= ac)
	{
		j = 0;
		while (*(av[i]) + j)
		{
			args[j] = *(*av + i) + j;
			j++;
			if (!(*(*av + i) + j))
				args[j] = '\n';

		}
		i++;
	}

	return (args);
}
