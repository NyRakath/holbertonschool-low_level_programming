#include "lists.h"
/**
* delete_nodeint_at_index - delete a node in node index
* @head: pointer to head pointer of the list
* @index: node to be deleted
* Return: 1 if it succeeded, -1 if it failed
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_temp, *node_prev;
	unsigned int iter;

	if (*head != NULL)
	{
		if (index == 0)
		{
			node_temp = *head;
			*head = (*head)->next;
			free(node_temp);
			return (1);
		}
		iter = 1;
		node_prev = *head;
		node_temp = (*head)->next;
		while (node_temp != NULL)
		{
			if (iter == index)
			{
				node_prev->next = node_temp->next;
				free(node_temp);
				return (1);
			}
			node_prev = node_temp;
			node_temp = node_temp->next;
			iter++;
		}
	}
	return (-1);
}
