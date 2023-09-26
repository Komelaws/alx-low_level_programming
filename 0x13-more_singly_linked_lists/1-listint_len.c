#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a linked list
 * @h: A pointer to a linked list element
 *
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
