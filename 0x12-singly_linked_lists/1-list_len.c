#include "lists.h"

/**
 * list_len = function that returns the number of elements in
 * a linked list
 * @h: Pointer to the linked list elemment
 *
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
