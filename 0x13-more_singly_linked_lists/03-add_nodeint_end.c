#include "lists.h"

/**
 * add_nodeint_end - Function that add node at the end of a linked list
 * @head: A pointer to a pointer the head element
 * @n: The first element in the head node
 *
 * Return: new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		return (new_node = *head);

	if (*head)
	{
		tmp = tmp->next;
		head = &tmp;
		add_nodeint_end(head, n);
		if (!*head)
		{
			new_node->n = n;
			tmp->next = new_node;
			new_node->next = NULL;
		}
	}

	return (new_node);
}
