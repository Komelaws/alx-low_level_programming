#include "main.h"
#include <stdlib.h>

/**
 * strtow - Function that splits a string to words
 * @str: String to be split to words
 *
 * Return: word
 */
char **strtow(char *str)
{
	int i, k, j;
	int len;
	char **word;

	if (str == NULL || !(*str))
		return (NULL);

	len = 0;
	for (i = 0; str[i]; i++)
	{
		if (*str == ' ' || *str == '	')
			continue;
		else
			len++;
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '	')
			k++;
	}
	word = (char **)malloc(k * sizeof(char *));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
	{
		for (j = 0; i < len; j++)
		{
			if (str[j] == ' ' || str[j] == '	')
				word[i][j] = str[j];
		}
		word[i][j++] = '\0';
	}

	return (word);
}
