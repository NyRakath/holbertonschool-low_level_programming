#include "lists.h"
/**
* print_listint - prints all nodes of a list integer
* @h: pointer to elements of type list_t
* Return: the number of nodes in the list
**/
size_t print_listint(const listint_t *h)
{
	size_t iter;

	for (iter = 0; h; iter++)
	{
		printf("%d\n", h->n); /* (*h).n */
		h = h->next; /* (*h).next */
	}
	return (iter);
}
