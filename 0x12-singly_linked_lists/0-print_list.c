#include "lists.h"

/**
 * print_list - Function that prints a list of a struct
 * @h: A pointer to the linked list to print
 *
 * Return: num
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] nil\n", h->len);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}

	return (num);
}
