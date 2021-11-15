#include "lists.h"
/**
* print_list - prints all nodes of a list
* @h: pointer to elements of type list_t
* Return: the number of nodes in the list
**/
size_t print_list(const list_t *h)
{
	size_t iter;

	for (iter = 0; h; iter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (iter);
}
