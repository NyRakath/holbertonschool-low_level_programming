#include "lists.h"
/**
* insert_nodeint_at_index - inserts new node in listint_t list at given index
* @head: pointer to head pointer of the list
* @index: node to insert at
* @n: data of the new node
* Return: the address of the new node, or NULL
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node_temp, *node_prev, *node_new;
	unsigned int iter;

	if (head == NULL)
		return (NULL);
	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->next = NULL;

	if (index == 0)
	{
		node_new->next = *head;
		*head = node_new;
		return (node_new);
	}
	iter = 1;
	node_prev = *head;
	node_temp = (*head)->next;
	while (node_temp != NULL)
	{
		if (iter == index)
		{
			node_prev->next = node_new;
			node_new->next = node_temp;
			return (node_new);
		}
		node_prev = node_temp;
		node_temp = node_temp->next;
		iter++;
	}
	if (node_temp == NULL && iter == index)
	{
		node_prev->next = node_new;
		return (node_new);
	}
	free(node_new); /* not coincidences with index */
	return (NULL);
}
