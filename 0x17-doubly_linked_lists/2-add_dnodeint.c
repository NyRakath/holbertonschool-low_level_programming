#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of the linked list
 * @head: pointer to current node of the linked list
 * @n: value of the node to add
 * Return: addres of the new node, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
