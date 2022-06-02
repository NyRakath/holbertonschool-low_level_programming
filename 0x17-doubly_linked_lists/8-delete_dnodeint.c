#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index of a linked list
 * @head: pointer to the current node of the list
 * @index: position of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;

	if (!head || !*head)
		return (-1);

	node = *head;
	if (index == 0)
		*head = node->next;

	while (index > 0)
	{
		node = node->next, index--;
		if (!node)
			return (-1);
	}

	if (node->prev)
		node->prev->next = node->next;
	else if (node->next)
		node->next->prev = NULL;

	if (node->next)
		node->next->prev = node->prev;
	else if (node->prev)
		node->prev->next = NULL;

	free(node);

	return (1);
}
