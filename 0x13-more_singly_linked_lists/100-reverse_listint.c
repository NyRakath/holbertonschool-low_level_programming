#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - reverses a list
* @head: pointer to head pointer of the list
* Return: head reverse a list
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_prev, *node_temp;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	node_prev = *head;
	*head = NULL;
	while (node_prev != NULL)
	{
		node_temp = node_prev->next;
		node_prev->next = *head;
		*head = node_prev;
		node_prev = node_temp;
	}
	return (*head);
}
