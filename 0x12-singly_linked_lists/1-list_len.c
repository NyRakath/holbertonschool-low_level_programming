#include "lists.h"
/**
* list_len - function that returns the number of elements in list_t
* @h: pointer to elements of type list_t
* Return: the number of nodes in the list
**/
size_t list_len(const list_t *h)
{
	size_t iter;

	for (iter = 0; h; iter++)
	{
		h = h->next;
	}
	return (iter);
}
