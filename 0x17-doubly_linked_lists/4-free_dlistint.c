#include "lists.h"

/**
 * free_dlistint - Free a double linked list
 * @head: pointer to the current node of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (head)
		node = node->next, free(head), head = node;
}
