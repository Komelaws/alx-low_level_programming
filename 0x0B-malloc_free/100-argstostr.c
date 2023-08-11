#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *str);

/**
 * argstostr - Function to concatenate all the arguments to
 * this program
 * @ac: The total number of arguments
 * @av: The arguments passed
 *
 * Return: argstr
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	char *argstr;

	len = 0;
	i = 0;
	while (i < ac)
	{
		len += _strlen(av[i]);

		i++;
	}

	argstr = (char *)malloc(sizeof(char) * len);

	if (argstr == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		len = 0;
		len = _strlen(av[i]);
		j = 0;
		while (j < len)
		{
			argstr[i] = *av[j];
			j++;
		}

		argstr[i] = '\n';
		i++;
	}

	return (argstr);
}


int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;

		str++;
	}

	return (i);
}
