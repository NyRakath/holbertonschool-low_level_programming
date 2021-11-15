#include "lists.h"
/**
* free_listint2 - function that free a listint_t list.
* @head: pointer to list_t list
* Return: nothing is void
**/
void free_listint2(listint_t **head)
{
	listint_t *nodetemp;

	while (head != NULL && *head != NULL)
	{
		nodetemp = *head;
		*head = (*head)->next;
		free(nodetemp);
	}
}
