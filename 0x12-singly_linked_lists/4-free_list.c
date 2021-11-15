#include "lists.h"
/**
* free_list - function that free a list_t list.
* @head: pointer to list_t list
* Return: nothing is void
**/
void free_list(list_t *head)
{
	list_t *nodetemp;

	while (head)
	{
		nodetemp = head;
		head = head->next;
		free(nodetemp->str);
		free(nodetemp);
	}
	head = NULL;
}
