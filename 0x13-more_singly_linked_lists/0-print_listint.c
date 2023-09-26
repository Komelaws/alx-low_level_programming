#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a
 * linked list
 * @h: Pointer to a linked list
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
