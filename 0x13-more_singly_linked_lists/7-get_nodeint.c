#include "lists.h"
/**
* get_nodeint_at_index - finds the nth node of a listint_t linked list
* @head: pointer to the head of the list
* @index: node to find
* Return: nth node or NULL
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_temp;
	unsigned int iter;

	if (head != NULL)
	{
		node_temp = head;
		iter = 0;
		while (node_temp != NULL)
		{
			if (iter == index)
				return (node_temp);
			node_temp = (*node_temp).next;
			iter++;
		}
	}
	return (NULL);
}
