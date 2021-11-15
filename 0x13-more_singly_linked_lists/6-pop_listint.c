#include "lists.h"
/**
* pop_listint - delete the head node of a listint_t list
* @head: pointer to the head of the list
* Return: head node's data (n) or 0 if head is NULL
**/
int pop_listint(listint_t **head)
{
	listint_t *node_temp;
	int value_node;

	if (*head != NULL)
	{
		node_temp = *head;
		*head = (*head)->next;
		value_node = node_temp->n;
		free(node_temp);
		return (value_node);
	}
	return (0);
}
