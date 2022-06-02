#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of the linked list
 * @head: pointer to current node of the linked list
 * @n: value of the node to add
 * Return: address of the new node, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head)
	{
		while (node->next)
			node = node->next;
		node->next = new;
		new->prev = node;
	}
	else
		*head = new;

	return (new);
}
