#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates its programs arguments
 * @ac: The number of arguments passed
 * @av: A pointer to an array of the arguments passed
 *
 * Return: string
 */
char *argstostr(int ac, char *av[])
{
	int i, j, k;
	int len;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	string = malloc(len * sizeof(*av) + 1);
	if (string == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			string[k] = av[i][j];
			j++;
			k++;
		}
		i++;
	}
	if (!(string[k]))
		string[k++] = '\n';

	return (string);
}
