#include "lists.h"

/**
 * add_nodeint - Function that adds a node at the beginning
 * of a linked list
 * @head: A pointer to a pointer to the head element
 * @n: The number of elemnts in the linked list
 *
 * Return: A pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
