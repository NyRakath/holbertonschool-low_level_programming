#include "lists.h"

/**
 * print_dlistint - Print all elements of a linked list
 * @h: points to the start of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
