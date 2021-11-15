#include "lists.h"
/**
* free_listint - function that free a listint_t list.
* @head: pointer to list_t list
* Return: nothing is void
**/
void free_listint(listint_t *head)
{
	listint_t *nodetemp;

	while (head)
	{
		nodetemp = head;
		head = head->next;
		free(nodetemp);
	}
	head = NULL;
}
