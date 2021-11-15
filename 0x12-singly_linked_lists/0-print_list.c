#include "lists.h"
/**
* print_list - prints all nodes of a list
* @h: pointer to elements of type list_t
* Return: the number of nodes in the list
**/
size_t print_list(const list_t *h)
{
	size_t iter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		iter++;
	}
	return (iter);
}
