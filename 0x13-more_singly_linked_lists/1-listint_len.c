#include "lists.h"
/**
* listint_len - function that returns the number of elements integers
* @h: pointer to elements of type list_t
* Return: the number of nodes in the list
**/
size_t listint_len(const listint_t *h)
{
	size_t iter;

	for (iter = 0; h; iter++)
	{
		h = h->next;
	}
	return (iter);
}
