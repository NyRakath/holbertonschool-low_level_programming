#include "lists.h"

/**
 * sum_dlistint - Sum values of the nodes on a linked list
 * @head: pointer to the current node of the linked list
 * Return: sum, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
		sum += head->n, head = head->next;

	return (sum);
}
