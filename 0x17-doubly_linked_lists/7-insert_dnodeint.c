#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert nodes a given position on the linked list
 * @h: pointer to the current node of the linked list
 * @idx: position where to add the new node
 * @n: value of the node to add
 * Return: the new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *node = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;
	while (idx > 1)
	{
		node = node->next, idx--;
		if (!node)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = node;
	new->next = node->next;
	node->next = new;
	if (new->next)
		new->next->prev = new;

	return (new);
}
