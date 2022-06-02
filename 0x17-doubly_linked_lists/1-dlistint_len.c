#include "lists.h"

/**
 * dlistint_len - Check number of nodes of a linked list
 * @h: point to the first node of the linked list
 * Return: number of nodes of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
		h = h->next, counter++;

	return (counter);
}
